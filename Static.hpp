#ifndef HEADER_301CEF6C_C2EC_11E7_8326_74D4359F3068_INCLUDED
#define HEADER_301CEF6C_C2EC_11E7_8326_74D4359F3068_INCLUDED

struct Informer
{
    Informer();
    ~Informer();
    Informer* get();
};

extern Informer g_informer;

#endif /* end of the header guard */
