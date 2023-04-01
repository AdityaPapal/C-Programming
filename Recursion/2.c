#include <stdio.h>
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

    int i;
    if (n != 1)
    {
        return n * fact(n - 1);
    }

    return 1;
}
/*
    Reursion --> Function calling itself
    abc()->abc()->abc()>
    5!--> 5*4*3*2*1==120
*/