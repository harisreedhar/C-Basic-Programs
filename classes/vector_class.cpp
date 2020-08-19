#include <iostream>

class Vector3
    {
        public:
            float x, y, z;

            // constructor to intialize vector to zero
            Vector3()
                {
                    x = 0;
                    y = 0;
                    z = 0;
                }

            // constructor overloading to accept values
            Vector3(float xIn, float yIn, float zIn)
                {
                    x = xIn;
                    y = yIn;
                    z = zIn;
                }

            // function for printing Vector3
            void print()
                {
                    std::cout << "(" << x << "," << y << "," << z << ")" << std::endl;
                }    
            
            // vector addition
            void add(const Vector3& v)
                {
                    x += v.x;
                    y += v.y;
                    z += v.z;
                }

            Vector3 operator+(const Vector3& v)
                {
                    Vector3 result;

                    result.x = x + v.x;
                    result.y = y + v.y;
                    result.z = z + v.z;

                    return result;
                } 

            // vector multiplication
            void multiplyInplace(const Vector3& v)
                {
                    x *= v.x;
                    y *= v.y;
                    z *= v.z;
                }

            Vector3 operator*(const Vector3& v)
                {
                    Vector3 result;

                    result.x = x * v.x;
                    result.y = y * v.y;
                    result.z = z * v.z;

                    return result;
                }       
    };

int main()
    {
        // Different ways of declaring Vector3
        Vector3 v1;
        Vector3 v2 = Vector3(2,2,2);
        Vector3 v3(3,3,3);
        
        // print values
        std::cout << "vector1 :";
        v1.print();
        std::cout << "vector2 :";
        v2.print();
        std::cout << "vector3 :";
        v3.print();

        // adding two vector in place
        std::cout << "Before adding :";
        v2.print(); 
        v2.add(v3);
        std::cout << "After adding :";
        v2.print();

        //adding two vector and storing in another variable
        Vector3 result;
        result = v2 + v3;

        std::cout << "vector2 :";
        v2.print();
        std::cout << "vector3 :";
        v3.print();
        std::cout << "After adding vector2 and vector3 :";
        result.print();
    }