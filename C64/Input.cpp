#include <utility>
#include "Input.hpp"

C64::Input::Input(std::string data)
        :data(std::move(data)) { }

std::string C64::Input::read() const
{
    return data;
}
