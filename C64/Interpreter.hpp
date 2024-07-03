#ifndef C64_INTERPRETER_HPP
#define C64_INTERPRETER_HPP

#include <string>
#include "Input.hpp"
#include "Output.hpp"

namespace C64 {

    class Interpreter {
    public:
        C64::Output process(C64::Input input);
    };

} // C64

#endif //C64_INTERPRETER_HPP
