#ifndef C64_INTERPRETER_HPP
#define C64_INTERPRETER_HPP

#include <string>

namespace C64 {
    struct Input {
        std::string data;
    };
    struct Output {
        std::string data;
    };

    class Interpreter {
    public:
        Output process(Input input);
    };

} // C64

#endif //C64_INTERPRETER_HPP
