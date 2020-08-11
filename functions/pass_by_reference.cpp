// pass by reference is only available in c++
/* compile c++ in linux by:
    gcc pass_by_reference.cpp -lstdc++
    or
    g++ pass_by_reference.cpp
    or
    g++ -o pass_by_ref_exec pass_by_reference.cpp
*/    

#include <iostream>
using namespace std;

void swap(int &x, int &y)
    {
        int temp;
        
        temp = x;
        x = y;
        y = temp;
    }

int main()
    {
        int a = 5;
        int b = 10;

        cout << "Before swapping a = " << a << "b = " << b << endl;
        swap(a, b);
        cout << "After swapping a = " << a << "b = " << b << endl;
    }