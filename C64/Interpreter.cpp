#include "Interpreter.hpp"
#include "Output.hpp"

C64::Output C64::Interpreter::process(const C64::Input& input)
{
    return C64::Output{input.read()};
}
