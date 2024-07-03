#ifndef C64_OUTPUT_HPP
#define C64_OUTPUT_HPP

#include <string>

namespace C64 {

    struct Output {
        std::string data;

        [[nodiscard]] bool empty() const;
    };

} // C64

#endif //C64_OUTPUT_HPP
