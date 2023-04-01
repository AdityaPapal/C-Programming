#include <stdio.h>
int sum(int i, int j)
{
    return i + j;
}
int main()
{
    int a = sum(4, 5);
    printf("ans is %d", a);
    return 0;
}