#include <stdio.h>

void swap(int *x, int *y)
    {
        int temp;

        temp = *x;
        *x = *y;
        *y = temp;
    }

int main()
    {
        int a = 5;
        int b = 10;

        printf("Before swapping a = %d and b = %d\n", a, b);
        swap(&a, &b);
        printf("After swapping a = %d and b = %d\n", a, b);
    }    