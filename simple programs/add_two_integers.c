#include<stdio.h>

int main()
    {
        int a;
        int b;
        int sum;

        printf("Enter first integer value \n");
        scanf("%d", &a);
        printf("Enter second integer value \n");
        scanf("%d", &b);

        sum = a + b;

        printf("Sum of %d and %d is %d \n", a, b, sum);
    }