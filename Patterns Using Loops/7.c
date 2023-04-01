#include <stdio.h>
// * * * * *
//   * * * *
//     * * *
//       * *
//         *
int main()
{
    int i, j;
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