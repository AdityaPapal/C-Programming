#include <stdio.h>
//         *
//       * *
//     * * *
//   * * * *
// * * * * *
int main()
{
    int i, j;
    for (size_t i = 1; i <= 5; i++)
    {
        for (size_t j = 5; j >= 1; j--)
        {
            if (i >= j || i == j)
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