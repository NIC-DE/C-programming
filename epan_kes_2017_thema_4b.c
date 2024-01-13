//epan_kes_2017_thema_4b


#include<stdio.h>


int  f(int n);

	
int main()
{
		
		f(7);
		
		
		printf("\n");
		system("pause");


}

int f(int n)
{


  
			
  if (n == 0) 
  return 1;
  
  if (n%2== 0) 
  
  return f(n-1)+f(n-2);
  else 
  return  f(n-1)+f(n/2);
  
  	
  
		
		
				

	
}
