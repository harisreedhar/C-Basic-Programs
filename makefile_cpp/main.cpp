#include <iostream>
#include "mathlib.h"

int main()
    {   
        float a = 10.5f;
        float b = 23.7f;
        std::cout << mathlib::add(&a, &b);
    }