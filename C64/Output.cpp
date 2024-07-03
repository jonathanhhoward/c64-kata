#include <utility>
#include "Output.hpp"

C64::Output::Output(std::string  data)
        :data(std::move(data)) { }

bool C64::Output::empty() const
{
    return data.empty();
}
