#include <stdio.h>

int main(void)
{
    int numbers [] = {7, 2, 5, 6, 8, 2, 3, 4, 9, 0};

    for (int i = 0; i < 10; i++)
        {
            if ( numbers[i] == 0)
            {
                printf("Found it!\n");
                break;  // break out of the loop when found
            }
            else printf("Not found tried %i times \n", i+1);
        }
    return 0;
}
