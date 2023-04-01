#include <stdio.h>
int main()
{
    int i;
    printf("Eter the number :");
    scanf("%d", &i);
    switch (i)
    {
    case 1:
        printf("one");
        break;
    case 2:
        printf("two");
        break;

    default:
        break;
    }
    return 0;
}