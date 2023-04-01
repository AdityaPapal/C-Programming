#include <stdio.h>
// *
// * *
// * * *
// * * * *
// * * * * *
// * * * *
// * * *
// * *
// *
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (size_t j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (i = 1; i <= 5; i++)
    {
        for (j = 4; j >= i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}