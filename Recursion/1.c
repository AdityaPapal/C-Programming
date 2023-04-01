#include <stdio.h>
/*
    Reursion --> Function calling itself
    abc()->abc()->abc()>
    5!--> 5*4*3*2*1==120
*/
int fact(int);
int main()
{
    int n = 5;
    fact(n);
    int a = fact(n);
    printf("Ans is %d", a);
    return 0;
}
int fact(int n)
{
    int f = 1;
    int i;
    for (size_t i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}