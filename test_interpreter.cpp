#include <catch2/catch_test_macros.hpp>
#include "C64/Interpreter.hpp"

TEST_CASE("Empty input produces empty output")
{
    C64::Interpreter interpreter;

    C64::Input input;
    C64::Output output = interpreter.process(input);

    REQUIRE(output.empty());
}