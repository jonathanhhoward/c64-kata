#include "Interpreter.hpp"
#include "Output.hpp"

C64::Output C64::Interpreter::process(C64::Input input)
{
    return {input.read()};
}
