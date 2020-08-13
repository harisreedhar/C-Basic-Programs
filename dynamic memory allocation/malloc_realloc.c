#include <stdio.h>
#include <stdlib.h>

int main()
    {
        int *ptr;
        int i;
        int size = 10;
        
        // allocate memory in heap
        ptr = (int*)malloc(size * sizeof(int));

        if(ptr != NULL)
            {
                for(i=0; i<size; i++)
                    {
                        *(ptr + i) = i;
                    }

                // reallocate memory
                int new_size = size * 2;
                ptr = realloc(ptr, new_size * sizeof(int));

                // enter remaining
                for(i=size; i<new_size; i++)
                    {
                        *(ptr + i) = i;
                    }

                for(i=0; i<new_size; i++)
                    {
                        printf("%d, ", *(ptr + i));
                    }

                // Deallocate memory
                free(ptr);
            }
        else
            {
                printf("Memory unavailable\n");
            }
    }