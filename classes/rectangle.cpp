#include <iostream>
#include <stdlib.h>

class Rectangle
    {
        // private members
        float length, breadth;

        public:
            // parametrized constructor to intialize class
            Rectangle(float l, float b)
                {
                    length = l;
                    breadth = b;
                }
            float area()
                {
                    return length * breadth;
                }

            float perimeter()
                {
                    return 2 * (length + breadth);
                }
    };

int main()
    {
        Rectangle rect = Rectangle(10, 5);

        std::cout << "Area = " << rect.area() << std::endl;
        std::cout << "Perimeter = " << rect.perimeter() << std::endl;
        
        Rectangle* rect2 = new Rectangle(2, 5);

        std::cout << "Area = " << rect2->area() << std::endl;
        std::cout << "Perimeter = " << rect2->perimeter() << std::endl;

        Rectangle* ptr = (Rectangle*)malloc(sizeof(Rectangle));
        new(ptr) Rectangle(2, 3);

        std::cout << "Area = " << ptr->area() << std::endl;
        std::cout << "Perimeter = " << ptr->perimeter() << std::endl;

        delete rect2;
        delete ptr;
    }