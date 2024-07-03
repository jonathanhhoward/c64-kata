#include <catch2/catch_test_macros.hpp>
#include "C64/Input.hpp"

TEST_CASE("Can read input")
{
    C64::Input input{"Hello, World!"};

    std::string data = input.read();

    REQUIRE(data == "Hello, World!");
}
