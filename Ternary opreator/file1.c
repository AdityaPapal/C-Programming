#include <stdio.h>
// ternary operator
// condition ? exp1 : exp2
int main()
{

    int i, j = 2;
    printf("Enter the number ");
    scanf("%d", &i);
    // if (i == 0)
    // {
    //     j = 34;
    // }
    // else
    //     j = 23;

    j = i == 0 ? 34 : 23;
    printf("%d", j);
    return 0;
}