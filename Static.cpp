#include "Static.hpp"

#include <iostream>

Informer::Informer()
{
    std::cerr << "ctor " << this << std::endl;
}

Informer::~Informer()
{
    std::cerr << "dtor " << this << std::endl;
}

Informer*
Informer::get()
{
    return this;
}

Informer g_informer;
