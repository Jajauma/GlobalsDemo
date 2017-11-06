#include "Dynamic.hpp"
#include "Static.hpp"

#include <iostream>

int
main(int, char* [])
{
    std::cerr << &g_informer << std::endl;
    std::cerr << &globalGetter() << std::endl;
    return 0;
}
