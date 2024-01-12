//ekpanaliptikes_eksetaseis_2018_thema2_a

#include<stdio.h>

int mystery(int x,int y);

int main()
{
 

	
 mystery(2,3);	
 
 printf("\n");
 
 system("pause");
	
	
	
	
}

int mystery(int X,int y)
{
	
int x;

if(y==0)
return(1);


return(x*mystery(x+1,y-1));  
	
	
	
}
