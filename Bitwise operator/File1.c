#include<stdio.h>
// Bitwise Operator
int main()
{ 
  /*
  Bitwaise or(|) operator :
     25 --> 1 1 0 0 1
     15 --> 0 1 1 1 1 
    --------------------
     9      0 1 0 0 1 
  Bitwise AND(&) operator
     25 --> 1 1 0 0 1
     15 --> 0 1 1 1 1 
    --------------------
     31     1 1 1 1 1 
  */  
   int i = 25 & 15;
   printf("%d\n",i);
   int j = 25 | 15;
   printf("%d",j);

   return 0;
}