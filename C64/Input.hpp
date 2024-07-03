#ifndef C64_INPUT_HPP
#define C64_INPUT_HPP

#include <string>

namespace C64 {

    class Input {
    public:
        explicit Input(std::string data = "");

        [[nodiscard]] std::string read() const;

    private:
        std::string data;
    };

} // C64

#endif //C64_INPUT_HPP
