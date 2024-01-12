//continue_command

#include<stdio.h>

main()
{
	  int a,x;
	
	  a=0;
	  
	  do {
	     printf("\nGive a number:");
         scanf("%d", &x);
		   if (x<0) continue;
		     printf("%d", x);
			    a=2*x; }
				 while (a!=100);	
	
	
}
