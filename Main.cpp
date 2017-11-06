#include "Dynamic.hpp"
#include "Static.hpp"

#include <iostream>

int
main(int, char* [])
{
    std::cerr << g_informer.get() << std::endl;
    std::cerr << globalGetter().get() << std::endl;
    return 0;
}
