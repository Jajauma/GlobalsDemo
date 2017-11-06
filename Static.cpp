#include "Static.hpp"

std::string&
detail::g_str()
{
    static std::string s = "String too long for short string optimization";
    return s;
}
