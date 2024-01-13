/*protoi_arithmoi*/

#include<stdio.h>

main()
{
	int i,j,m;
	
	for(i=2;i<=100;i++)
	  
	{
		m=0;
		
		for(j=1;j<=i;j++)
		    if(i % j==0)
		    m++;
		    
		    if(m==2)
			printf("%d\n",i);
		    
		   	
		   
	}      
	
	
	
	
	
}
