#include <stdio.h>
#include <stdlib.h>

struct Vector3
    {
        float x;
        float y;
        float z;
    };

int main()
    {
        struct Vector3 *vec;
        int amount = 3;
        
        // allocate memory for three variables of Vector3 type
        vec = (struct Vector3*)malloc(amount * sizeof(struct Vector3));
        if(vec == NULL)
            {
                printf("Not allocated!");
                return 1;
            }

        // different ways of accessing elements
        (*(vec + 0)).x = 1.0;
        (*(vec + 0)).y = 2.0;
        (*(vec + 0)).z = 3.0;
        
        vec[1].x = 4.0;
        vec[1].y = 5.0;
        vec[1].z = 6.0;
        
        (vec + 2) -> x = 7.0;
        (vec + 2) -> y = 8.0;
        (vec + 2) -> z = 9.0;

        for(int i=0; i<amount; i++)
            {
                printf("Vector %d values:\n", i+1);
                printf("Vector.x = %f\n", (vec + i) -> x);
                printf("Vector.y = %f\n", (vec + i) -> y);
                printf("Vector.z = %f\n", (vec + i) -> z);
            }

        free(vec);
    }
