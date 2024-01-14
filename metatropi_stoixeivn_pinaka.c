/*metaropi stoixeiwn toy pinaka*/

#include<stdio.h>

#define size 5


int main(void)

{
	int i,items ;
	int num [size]={-1,-6,6,-9,-1500};
	
	
	for(i=0;i<5;i++)
	  if(num [i]>=0)
	    num [i]++;
	  else
	    num[i]-=2;

    for(i=0;i<5;i++)
	printf("num[%d]=%3d\n",i,num[i]);
	
	return 0;					     				  
}
