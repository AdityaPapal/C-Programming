#include <stdio.h>
// swaping of two number with binary code
int main()
{
    int i = 5; // 2 bytes -- > 1 0 1
    int j = 6; // 2 bytes -- > 1 1 0
    //before swaping
    printf(" i:%d  j:%d", i, j);
    // after swaping
    //  XOR --- > 1 1 -> 0   1 0 -> 1

    i = i ^ j; // 1 0 1 ^ 1 1 0 ---> 0 1 1
    j = i ^ j; // 0 1 1 ^ 1 1 0 ---> 1 0 1  --> 5
    i = i ^ j; // 0 1 1 ^ 1 0 1 ---> 1 1 0  --> 6
    printf(" i:%d  j:%d", i, j);
    return 0;
}