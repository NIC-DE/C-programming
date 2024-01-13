//epan_kes_2017_thema_4b


#include<stdio.h>
#include<stdlib.h>

int  f(int n);

	
int main()
{
		
		int n=7;
		
		
		printf("%d",f(n));
		


}

int f(int n)
{

  int c;
  
			
  if (n == 0) 
  return 1;
  
  if (n%2== 0)  
  return f(n-1)+f(n-2); 
  else 
  return  f(n-1)+f(n/2);
 				

	
}
