#ifndef HEADER_301CEF6C_C2EC_11E7_8326_74D4359F3068_INCLUDED
#define HEADER_301CEF6C_C2EC_11E7_8326_74D4359F3068_INCLUDED

#include <string>

namespace detail {
std::string& g_str();
} /* namespace detail */

static auto& g_str = detail::g_str();

#endif /* end of the header guard */
