#include <stdio.h>
#include <stdlib.h>

int main()
    {
        int *arr;
        int i;
        size_t amount = 10; // intial size

        arr = (int*)calloc(amount, sizeof(int));
        if(arr == NULL) 
            {
                printf("Not enough Memory"); 
                return 1;
            }
        else
            {
                for(i=0; i<amount; i++)
                    {
                        arr[i] = i;
                    }

                for(i=0; i<amount; i++)
                    {
                        printf("%d, ", arr[i]);
                    }
                    
                free(arr);   
            }
    }