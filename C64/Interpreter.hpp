#ifndef C64_INTERPRETER_HPP
#define C64_INTERPRETER_HPP

#include <string>
#include "Input.hpp"

namespace C64 {
    struct Output {
        std::string data;
    };

    class Interpreter {
    public:
        Output process(Input input);
    };

} // C64

#endif //C64_INTERPRETER_HPP
