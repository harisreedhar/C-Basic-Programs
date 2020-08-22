// for naming convention i used 
// .hpp instead of .h to show c++ header file
// and .cc instead of .cpp for non main programs.
// at the end it doesn't matter, g++ can identify all these extensions

#include <iostream>
#include "mathlib.hpp"

int main()
    {   
        float a = 10.5f;
        float b = 23.7f;
        std::cout << mathlib::add(&a, &b);
    }