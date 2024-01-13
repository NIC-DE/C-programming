//telikes_2018_thema_1b


#include<stdio.h>

	
int main()
{
		
		
		
		
		printf("%d",what(5,5));
		


}

int what(int x,int y)
{

  
  
			
  if (y == 1) 
  return x; 
  
  
  else 
  return  (x+what(x-1,y-1));
 				

	
}
