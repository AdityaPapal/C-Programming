#include <stdio.h>
int alge(int i, int j)
{
    return i + j;
}
int sub(int i, int j)
{
    return i - j;
}
int mul(int i, int j)
{
    return i * j;
}
int div(int i, int j)
{
    return i / j;
}

int main()
{
    int c, d;
    printf("Enter the first number :");
    scanf("%d", &c);
    printf("Enter the second number :");
    scanf("%d", &d);
    int a = alge(c, d);
    printf("Addition is %d\n", a);
    int b = sub(c, d);
    printf("Subtraction is %d\n", b);
    int x = mul(c, d);
    printf("Multiplication is %d\n", x);
    int y = div(c, d);
    printf("Division is %d\n", y);
    return 0;
}