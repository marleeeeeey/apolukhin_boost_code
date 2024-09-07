#include <boost/config.hpp>
#include <string>

#define API extern "C" BOOST_SYMBOL_EXPORT

API std::string greeter(const std::string& name)
{
    return "Good to meet you, " + name + ".";
}
