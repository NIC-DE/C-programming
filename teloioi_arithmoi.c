/*teloioi_arithmoi*/

#include<stdio.h>

main()

{
	
	int i,j,sum;
	for(i=1;i<=10000;i++)
	   
{
	sum=0;
	
	for(j=1;j<i;j++)
	   if(i%j==0)
	   sum+=j;
	if(sum==i)
	printf("%d\n",i);   
	
	
}	  
	
	
	
	
	
}
