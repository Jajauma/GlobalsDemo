#include "Dynamic.hpp"
#include "Static.hpp"

Informer&
globalGetter()
{
    return g_informer;
}
