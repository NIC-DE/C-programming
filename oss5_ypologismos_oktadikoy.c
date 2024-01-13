//oss5_ypologismos_oktadikoy


#include<stdio.h>
#include<stdlib.h>
#define N 10

void octal_to_decimal(int octal[N]);



int main()

{
 int octal[N]={0,0,0,0,0,5,7,3,0,1};
 
 octal_to_decimal(octal);
 
 
}


void octal_to_decimal(int octal[N])
{
 int i, coef;
 
  int s = 0; 
   coef = 1;
   
for (i = 9; i>=0; --i)
  {
 	
   s+= octal[i]*coef; 
   coef = 8*coef;
  }
   printf("%d",s);
 
  }
  














