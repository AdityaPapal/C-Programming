#include <stdio.h>
//check which number is greater!
int main()
{
    int i, j, k;
    printf("Enter the first number: ");
    scanf("%d", &i);
    printf("Enter the second number: ");
    scanf("%d", &j);
    printf("Enter the Third number: ");
    scanf("%d", &k);

    if (i > j && i > k)
    {

        printf("The greater number is %d", i);
    }
    else if (j > k)
    {
        printf("The greater number is %d ", j);
    }

    else
        printf("The greater number is %d", k);
}