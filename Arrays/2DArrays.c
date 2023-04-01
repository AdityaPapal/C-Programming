#include <stdio.h>
int main()
{
    /*   
          0 1 2 3
      0  {1,2,3,4}
      1  {5,6,7,8}
      2  {9,2,4,6}
   */
    int i, j;
    int A[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 2, 4, 6}};
    printf("%d\n", A[2][3]);
    for (i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}
