#ifndef C64_OUTPUT_HPP
#define C64_OUTPUT_HPP

#include <string>

namespace C64 {

    struct Output {
        std::string data;

        bool empty();
    };

} // C64

#endif //C64_OUTPUT_HPP
