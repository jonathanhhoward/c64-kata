#include <catch2/catch_test_macros.hpp>
#include "C64/Output.hpp"

TEST_CASE("Can check for empty output")
{
    C64::Output output;

    REQUIRE(output.empty());
}
