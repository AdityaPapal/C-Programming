#include <stdio.h>
int main()
{
    int i = 20;
    int j = 10;
    //before swaping
    printf(" i:%d  j:%d", i, j);
    // after swaping
    i = i + j;
    j = i - j;
    i = i - j;
    printf("\n i:%d  j:%d", i, j);

    return 0;
}