#include <stdio.h>
//  * * * * *
//  * * * *
//  * * *
//  * *
//  *
int main()
{
    int i, j;
    for (size_t i = 1; i < 6; i++)
    {
        for (size_t j = 6; j > i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}