#include <stdio.h>
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    printf("First element is %d\n", 2 * *a);
    printf("Second element is %d\n", *(a + 1));
    printf("Third element is %d", *(a + 2));

    return 0;
}