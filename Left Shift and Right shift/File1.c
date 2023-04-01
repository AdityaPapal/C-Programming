#include<stdio.h>
int main()
{ 
   /*         
       Binary code  
        1 0 0 0 0 ---> 16 
       After left shift 
        1 0 0 0 0 0 0 ---> 64
       After right shift 
        1 0 0 ---> 4    
   */ 
    int i = 16;
    int j = i << 2;  // --> left shift 
   printf("%d\n",j);

   int k = i >> 2;   // --> Right Shift 
   printf("%d\n",k);

   return 0;
}