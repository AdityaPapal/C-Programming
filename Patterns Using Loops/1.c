#include <stdio.h>
// * * * *
// * * * *
// * * * *
// * * * *
int main()
{
    int i, j;
    for (size_t i = 1; i <= 4; i++)
    {
        for (size_t j = 4; j >= 1; j--)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}