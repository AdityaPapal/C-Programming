#include <stdio.h>
//C program to find maximum between two numbers
int main()
{
    int i, j;
    printf("Enter the First Number: ");
    scanf("%d", &i);
    printf("Enter the Second Number: ");
    scanf("%d", &j);

    if (i > j)
    {
        printf("%d is greater number", i);
    }
    else if (j > i)
    {
        printf("%d is greater number", j);
    }
    else if (i == j)
    {
        printf("Both are equal");
    }
    else
        printf("fuck off");
    return 0;
}