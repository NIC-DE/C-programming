//mkd_askisi_7_2_3_anadromi

#include<stdio.h>
#include<stdlib.h>

int gcd(int a, int b)
{ 
 
if(a%b==0)

  return b; 
  
 else return gcd(b, a%b);  
}

int main()
{

  	
  int b;
  
  	
  b=gcd(1071,462);	
  printf("b=%d",b);	
	
	
 } 
