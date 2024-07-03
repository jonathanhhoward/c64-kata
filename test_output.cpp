#include <catch2/catch_test_macros.hpp>
#include "C64/Output.hpp"

TEST_CASE("Can check for empty output")
{
    C64::Output output;

    REQUIRE(output.empty());
}

TEST_CASE("Can check for existing output")
{
    C64::Output output{"Hello, World!"};

    REQUIRE_FALSE(output.empty());
}
