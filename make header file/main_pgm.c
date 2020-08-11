// compile 2 files
// gcc main_pgm.c basic_math.c

#include <stdio.h>
#include "basic_math.h"

int main()
    {
        int a = 5;
        int b = 10;
        int sum, dif, mul;

        add(&sum, &a, &b);
        subtract(&dif, &a, &b);
        multiply(&mul, &a, &b);

        printf("Sum = %d \n", sum);
        printf("Difference = %d \n", dif);
        printf("Product = %d \n", mul);
    }