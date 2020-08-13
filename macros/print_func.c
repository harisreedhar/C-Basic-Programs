#include <stdio.h>

#define PRINT_INT(x) printf("%d", x)
#define PRINT_FLOAT(x) printf("%f", x)
#define ENDL printf("\n")

int main()
    {
        int a = 5;
        float b = 6.2;

        PRINT_INT(a);
        ENDL;
        PRINT_FLOAT(b);
    }