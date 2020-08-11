#include <stdio.h>

int add(int x, int y)
    {
        return (x + y);
    }

int main()
    {
        int a = 5;
        int b = 10;

        int sum = add(a, b);
        printf("Sum = %d \n", sum);
    }