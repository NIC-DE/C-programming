//epan_kes_2018_thema_2_a


#include<stdio.h>
#include<stdlib.h>






int main()

{
   
   mystery(3,3);
   mystery(2,3);
   
   printf("%d\n%d\n",mystery(3,3),mystery(2,3));	
}

int mystery(int x,int y)
{
	
  if(y==0)
  return (1);
  
  return  x*mystery(x+1,y-1);
  	
	
	
	
	
	
	
	
}

