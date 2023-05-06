// p_2.cpp : Defines the entry point for the application.
//

#include "p_2.h"

#include <iostream>

void* memcpy(void* to, const void* from, size_t n)
{
    const char* f_pointer = (const char*)from;
    char* t_pointer = (char*)to;
    for (size_t i = 0; i < n; ++i)
    {
        *(t_pointer++) = *(f_pointer++);
    }
    return to;
}

int main()
{
    const int n = 2;
    int value1[n] = { 10, 11 };
    int value2[n] = { 2, 4 };
    for (int i = 0; i < n; i++) {
        memcpy(&value2[i], &value1[i], sizeof(int));
    }
    std::cout << value2[1] << '\n';
}