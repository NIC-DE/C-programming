//telikes_2017_thema5_a


#include<stdio.h>

int  f(int v);

	
int main()
{
		
		int v=7;//edo den to vazo me morfi f(n) den to typvnei
	
		
		printf("%d",f(v));
		


}

int f(int v )
{


  
			
  if (v == 1) 
  return 1;
  
  			
  if (v%2== 0) 
  return f(v/2)+2;
  
  else
  
  return f(v-1)+1;		
				

	
}
