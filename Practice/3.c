#include <stdio.h>

int main()
{
    int size;
    printf("Enter the value of arr size ");
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter array value\t");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }

    printf("\nEven numbers in the array are: \n");
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d  ", arr[i]);
        }
    }
    printf("\nOdd numbers in the array are: \n");
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("%d  ", arr[i]);
        }
    }
    printf("\nPositive numbers in the array are: \n");
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            printf("%d  ", arr[i]);
        }
    }
    printf("\nNegative numbers in the array are: \n");
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            printf("%d  ", arr[i]);
        }
    }

    return 0;
}