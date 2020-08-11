#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* 
    if sqrt or math error occurs while compiling
    include -lm at end.

    example:
        gcc quadratic_equation.c -lm
        or
        gcc -o quadratic_executable quadratic_equation.c -lm

    for more information check this thread: 
    https://stackoverflow.com/questions/5248919/undefined-reference-to-sqrt-or-other-mathematical-functions    
*/

int main()
    {
        float a, b, c;
        float r1, r2, dis, real, imaginary;

        printf("Enter coefficients of a and b \n");
        scanf("%f%f", &a, &b);
        printf("Enter constant \n");
        scanf("%f", &c);

        dis = b * b - (4 * a * c);

        if(dis > 0)
            {
                printf("Real and distinct \n");
                r1 = (-b + sqrt(dis)) / (2*a);
                r2 = (-b - sqrt(dis)) / (2*a);
                printf("Roots are %f and %f \n", r1, r2);
            }
        else if(dis == 0)
            {
                printf("Real and equal \n");
                r1 = -b / (2*a);
                r2 = r1;
                printf("Roots are %f and %f \n", r1, r2);
            }
        else if(dis < 0)
            {
                printf("Imaginary roots \n");
                real = -b / (2*a);
                imaginary = sqrt(abs(dis)) / (2*a);
                printf("Roots are %f + i %f and %f - i %f \n", real, imaginary, real, imaginary);
            }        
    }