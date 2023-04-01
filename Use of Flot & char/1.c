#include <stdio.h>
int main()
{
    /*
       int ---> 2 bytes
       float ---> 4 bytes
       char ---> 1 bytes    
    */
    int i = 12;
    float j = 5.6;
    char c = 'A';
    char ch[10] = "ADITYA"; // string
    printf("%d", i);
    printf("\n%.1f", j);
    printf("\n%c", c);
    printf("\n%s", ch);
    return 0;
}