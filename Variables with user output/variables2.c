#include<stdio.h>
int main() // return type
{
    //premitive data typ
    int i, j;
    printf("Enter the First Number :");
    scanf("%d",&i);
    printf("Enter the second number :");
    scanf("%d",&j);
    printf("The addition of %d and %d is %d\n",i,j,i+j);
    printf("The subtrction of %d and %d is %d\n",i,j,i-j);
    printf("The multiplication of %d and %d is %d\n",i,j,i*j);
    printf("The division of %d and %d is %d\n",i,j,i/j);
    return 0;
}