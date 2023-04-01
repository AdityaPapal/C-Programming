#include <stdio.h>
//           *
//         * *
//       * * *
//     * * * *
//   * * * * *
// * * * * * *
// * * * * * *
//   * * * * *
//     * * * *
//       * * *
//         * *
//           *
int main()
{
    int i, j;
    for (size_t i = 1; i <= 6; i++)
    {
        for (size_t j = 6; j >= 1; j--)
        {
            if (i >= j)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    for (size_t i = 0; i < 6; i++)
    {
        for (size_t j = 0; j < 6; j++)
        {
            if (j >= i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}