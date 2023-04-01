#include <stdio.h>
// *p Addrese of a vairiables
int main()
{
    int i = 10;
    int *p;
    p = &i;
    printf("%d\n", i);
    printf("%d\n", p); // addrese of i
    printf("%d", *p);  // value of addrese of p
    return 0;
}