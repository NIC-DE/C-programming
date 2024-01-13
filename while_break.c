//while_break

#include<stdio.h>

main()

{
  int j,count;
  	
  for (j=1; j<100; j++)
   { 
         count=1;
		     do 
			  { 
			   printf("%d" , count);
			       count++;
				      if (count==10) break;
			  } while (1);
			  
			    printf("\n");        	
	
	          }
	
	
	
}


