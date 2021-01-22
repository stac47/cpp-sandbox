#include <boost/spirit/include/classic_common.hpp>
#include <boost/spirit/include/classic_core.hpp>
#include <boost/spirit/include/classic_parse_tree.hpp>
#include <boost/spirit/include/classic_utility.hpp>

#include <iostream>
#include <string>

struct MappingValue{};

typedef char const* iterator_t;
typedef boost::spirit::classic::node_val_data_factory<MappingValue> factory_t;
typedef boost::spirit::classic::tree_match<iterator_t, factory_t>
    parse_tree_match_t;
typedef parse_tree_match_t::const_tree_iterator iter_t;
typedef parse_tree_match_t::node_t mapping_node_t;

struct Mapping {
	Mapping() {}

    void operator()(mapping_node_t&, char const* str,
                    char const* end) const {}

    MappingValue _value;
};

struct my_grammar : public boost::spirit::classic::grammar<my_grammar> {
    virtual ~my_grammar(){};
    template <typename ScannerT>
    struct definition {
        definition(my_grammar const&)
        {
            Main = boost::spirit::classic::str_p("AAA");
        }
        boost::spirit::classic::rule<ScannerT, boost::spirit::classic::parser_tag<0> > Main;

        boost::spirit::classic::rule<ScannerT, boost::spirit::classic::parser_tag<0> > const&
        start() const
        {
            return Main;
        }
    };
};


int main(int, char*[])
{
    my_grammar g;
    std::string input = "AAA";
    auto result = boost::spirit::classic::pt_parse<factory_t>(
        input.c_str(), input.c_str() + input.size(), g,
        boost::spirit::classic::space_p);
    return 0;
}
