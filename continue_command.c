//continue_command

#include<stdio.h>

main()
{
	
	
	int b=2, a=1;
	   do {
	    b++;
	    if (b>3) continue;
		 printf("*");
		  while (a*b<3)
		   { a++;
		    printf("+");
			 }
			 } while (b<10);
	
	
}

