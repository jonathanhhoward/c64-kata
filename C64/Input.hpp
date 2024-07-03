#ifndef C64_INPUT_HPP
#define C64_INPUT_HPP

#include <string>

namespace C64 {

    struct Input {
        std::string data;

        [[nodiscard]] std::string read() const;
    };

} // C64

#endif //C64_INPUT_HPP
