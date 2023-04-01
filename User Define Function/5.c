#include <stdio.h>
int sum(int, int);
int main()
{
    int a = sum(5, 6);
    printf("ans is %d", a);

    return 0;
}
int sum(int i, int j)
{
    return i + j;
}