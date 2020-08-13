#include <stdio.h>

int fib(int n)
    {
        if(n > 1)
            {
                return n * fib(n - 1);
            }
        return 1;
    }

int main()
    {
        int n = 5;
        printf("Factorial of %d is %d", n, fib(n));
    }