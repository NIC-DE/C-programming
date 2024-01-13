//sel  37

#include<stdio.h>
#define EOF '\n'
//metrisi grammon stin eisodo 

main()
{
	int c,nl;
	
	
	nl=0;
	
	
	while((c=getchar() != EOF))
	     if(c=='\n')
	        ++nl;
		
		printf("%d\n",nl);	
		
	  
}
	

