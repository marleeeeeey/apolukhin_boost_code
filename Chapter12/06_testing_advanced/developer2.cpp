// developer2.cpp
#include "foo.hpp"
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE(test_no_2)
{
    // ...
    foo f1 = {1}, f2 = {2};
    BOOST_REQUIRE_NE(f1, f2);
    // ...
} // BOOST_AUTO_TEST_CASE(test_no_2)
