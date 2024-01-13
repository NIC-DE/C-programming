/*metaropi stoixeiwn toy pinaka*/

#include<stdio.h>


int main(void)

{
	int i,items ;
	int num [10]={-1,-5,6,8,-3,-10,-45,3,5,0};
	
	
	for(i=0;i<10;i++)
	  if(num [i]>=0)
	    num [i]++;
	  else
	    num[i]-=2;

    for(i=0;i<10;i++)
	printf("num[%d]=%3d\n",i,num[i]);
	
	return 0;					     				  
}
