#ifndef C64_INTERPRETER_HPP
#define C64_INTERPRETER_HPP

#include <string>

namespace C64 {

    class Interpreter {
    public:
        std::string process(std::string input);
    };

} // C64

#endif //C64_INTERPRETER_HPP
