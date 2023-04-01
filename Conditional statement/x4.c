#include <stdio.h>
// check even or odd
int main()
{
    int num;
    printf("Enter the year  :");
    scanf("%d", &num);
    if (num % 4 == 0)
    {
        printf("%d is a leap year", num);
    }
    else
        printf("%d is not a leap year", num);

    return 0;
}