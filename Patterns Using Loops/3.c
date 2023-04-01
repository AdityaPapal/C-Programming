#include <stdio.h>
//  *
//  * *
//  * * *
//  * * * *
//  * * * * *
int main()
{
    int i, j;
    for (i = 0; i <= 4; i++)
    {
        for (size_t j = 0; j <= i; j++)
        {
            /* code */
            printf(" *");
        }
        printf("\n");
    }

    return 0;
}