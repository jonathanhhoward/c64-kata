#ifndef C64_OUTPUT_HPP
#define C64_OUTPUT_HPP

#include <string>

namespace C64 {

    class Output {
    public:
        explicit Output(std::string data = "");

        [[nodiscard]] bool empty() const;

    private:
        std::string data;
    };

} // C64

#endif //C64_OUTPUT_HPP
