#include <stdio.h>
int main()
{
    int size;
    int Ele;
    int i;
    printf("Enter the size of an Array's: ");
    scanf("%d", &size);
    int myArr[size];
    printf("Enter the %d of element for the array: \n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &myArr[i]);
    }

    for (int j = 0; j < size; j++)
    {
        printf("%d  ", myArr[j]);
    }

    return 0;
}
