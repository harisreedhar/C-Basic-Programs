#include <stdio.h>

int main()
    {
        float f;
        float c;

        printf("Enter fahrenheit value \n");
        scanf("%f", &f);

        c = 5 * (f - 32) / 9;

        printf("Celcius value of %f is %f \n", f, c);
    }