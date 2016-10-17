#include <string>
#include <memory>
#include <iostream>
#include <ios>
#include <utility>
#include <vector>

#include <boost/multi_index_container.hpp>
#include <boost/multi_index/ordered_index.hpp>
#include <boost/multi_index/member.hpp>
#include <boost/multi_index/tag.hpp>
#include <boost/multi_index/composite_key.hpp>
#include <boost/multi_index/sequenced_index.hpp>
#include <boost/tuple/tuple.hpp>

struct User
{
    User(const std::string& iFirstname,
         std::shared_ptr<std::string> iLastname,
         const std::string& iPhoneNumber)
      : firstname(iFirstname),
        lastname(iLastname),
        phoneNumber(iPhoneNumber)
    {}

    std::string firstname;
    std::shared_ptr<std::string> lastname;
    std::string phoneNumber;
};

typedef std::shared_ptr<User> UserPtr;


using boost::multi_index_container;
using boost::multi_index::indexed_by;
using boost::multi_index::tag;
using boost::multi_index::ordered_unique;
using boost::multi_index::member;
using boost::multi_index::composite_key;
using boost::multi_index::sequenced;
;

struct IndexByFirstLastName;

typedef multi_index_container<
    UserPtr,
    indexed_by<
        ordered_unique<
            tag<IndexByFirstLastName>,
            composite_key<
                User,
                member<User, std::string, &User::firstname>,
                member<User, std::shared_ptr<std::string>, &User::lastname>
            >
        >
    >
> Users;


int main(int argc, const char *argv[])
{
    auto staculs = std::make_shared<std::string>("stacul");
    Users users;
    users.insert(std::make_shared<User>("laurent",
                                        staculs,
                                        "06..."));
    users.insert(std::make_shared<User>("seb",
                                        staculs,
                                        "07..."));
    users.insert(std::make_shared<User>("jean",
                                        std::make_shared<std::string>("papin"),
                                        "06..."));

    std::string laurentStr("laurent");
    Users::iterator it = users.find(boost::make_tuple(laurentStr, staculs));
    // Since C++11
    // Users::iterator it = users.find(std::make_tuple("laurent", "stacul"));
    std::cout << (*it)->phoneNumber << std::endl;

    auto staculsBis = std::make_shared<std::string>("stacul");
    Users::iterator itBis = users.find(boost::make_tuple("laurent", staculsBis));
    if (itBis == users.end())
    {
        std::cout << "Nothing found" << std::endl;
    }

    return 0;
}


