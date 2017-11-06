#ifndef HEADER_301CEF6C_C2EC_11E7_8326_74D4359F3068_INCLUDED
#define HEADER_301CEF6C_C2EC_11E7_8326_74D4359F3068_INCLUDED

#include <string>

namespace detail {
template <typename Unused>
struct Globals
{
    static std::string g_str;
};

template <typename Unused>
std::string Globals<Unused>::g_str
    = "String too long for short string optimization";
} /* namespace detail */

static auto& g_str = detail::Globals<void>::g_str;

#endif /* end of the header guard */
