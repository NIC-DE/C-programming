/*synxwneysi_pinakwn*/

#include<stdio.h>
#define N 5
#define M 4

main()
{
	int i,j,k,c[9];
	int a[N]={1,4,6,33,34};
	int b[M]={2,3,7,8};
	i=j=k=0;
	
	while(i<N && j<M)
	{
		if(a[i]<b[j])
		  c[k++]=a[i++];
		else
		  c[k++]=b[j++];	  
  		    
	}
	if(i<N)		
	{
		
	 int t;
	    for(t=i;t<N;t++)
		  c[k++]=a[i++];
		
	}		  
	else
	{
		int t;
		for(t=j;t<M;t++)
		    c[k++]=b[j++];	
	}
	
	printf("merged array c:\n");
	    for(k=0;k<(N+M);k++)
	    printf("\n%d",c[k]);
	
}


























