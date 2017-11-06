#include "Dynamic.hpp"
#include "Static.hpp"

std::string&
globalGetter()
{
    return g_str();
}
