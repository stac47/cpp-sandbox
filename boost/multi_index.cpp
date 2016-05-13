#include <string>
#include <memory>
#include <iostream>
#include <ios>
#include <utility>
#include <vector>

#include <boost/multi_index_container.hpp>
#include <boost/multi_index/ordered_index.hpp>
#include <boost/multi_index/member.hpp>
#include <boost/multi_index/composite_key.hpp>
#include <boost/multi_index/sequenced_index.hpp>
#include <boost/tuple/tuple.hpp>

struct User
{
    User(const std::string& iFirstname,
         const std::string& iLastname,
         int iAge)
      : firstname(iFirstname),
        lastname(iLastname),
        age(iAge)
    {}

    std::string firstname;
    std::string lastname;
    unsigned int age;
    std::shared_ptr<User> link;
    std::vector<std::string> tags;
};

using boost::multi_index_container;
using boost::multi_index::indexed_by;
using boost::multi_index::ordered_unique;
using boost::multi_index::member;
using boost::multi_index::composite_key;
using boost::multi_index::sequenced;
;
typedef multi_index_container<
    User,
    indexed_by<
        ordered_unique<
            composite_key<
                User,
                member<User, std::string, &User::firstname>,
                member<User, std::string, &User::lastname>
            >
        >,
        sequenced<>
    >
> Users;


int main(int argc, const char *argv[])
{
    Users users;
    users.insert({"laurent", "stacul", 20});
    users.insert({"seb", "stacul", 18});
    users.insert({"jean", "papin", 22});
    users.get<1>().push_back({"stef", "stacul", 21});

    Users::iterator it = users.find(boost::make_tuple("laurent", "stacul"));
    // Since C++11
    // Users::iterator it = users.find(std::make_tuple("laurent", "stacul"));
    std::cout << it->age << std::endl;

    User stef = *users.find(boost::make_tuple("stef", "stacul"));

    User laurent = *it;
    laurent.age = 47;
    laurent.link = std::make_shared<User>(stef);
    laurent.tags.push_back("test");
    // All is const in an index
    // it->tags.push_back("test2");
    users.replace(it, laurent);

    it = users.find(boost::make_tuple("laurent", "stacul"));
    std::cout << std::boolalpha << (it != users.get<0>().end()) << std::endl;
    std::cout << it->age << std::endl;
    std::cout << it->link->firstname << std::endl;

    it = users.find(boost::make_tuple("laurent", "stacul"));
    it->link->firstname = "TOTO";

    it = users.find(boost::make_tuple("laurent", "stacul"));
    std::cout << it->link->firstname << std::endl;

    users.erase(it);
    it = users.find(boost::make_tuple("laurent", "stacul"));
    std::cout << std::boolalpha << (it == users.get<0>().end()) << std::endl;

    std::cout << "=======================================" << std::endl;
    for (it = users.get<0>().begin(); it != users.get<0>().end(); ++it)
    {
        std::cout << it->firstname << std::endl;
    }

    return 0;
}

