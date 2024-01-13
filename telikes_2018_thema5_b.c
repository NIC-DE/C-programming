//telikes_2018_thema5_b


#include<stdio.h>
#include<stdlib.h>
#define N 3

int arrayX(int array[N],int n);

main()
{
	
int n;	
int array[N]={1,-2,2};		
 
	
 arrayX(array,3);	
	
}

int arrayX(int array[],int n)
{
	

int t=0,*ptr;

for(ptr=array;ptr<array+n;ptr++)

  t+=*ptr;
  
{
	  printf("t=%d",t);
	
	
}
	
}
