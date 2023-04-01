#include <stdio.h>
// * * * *
// *     *
// *     *
// * * * *
int main()
{
    int i, j;
    for (size_t i = 1; i < 5; i++)
    {
        for (size_t j = 1; j < 5; j++)
        {
            if (i == 1 || i == 4 || j == 1 || j == 4)
            {
                printf("* ");
            }
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}