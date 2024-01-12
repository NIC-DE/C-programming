//continue


#include <stdio.h>


main()
{
   int x,i,c,sum;
   	
   for (i=0; i<5; i++)
    { 
        scanf("%d",&x);
		      if (x%3==0) continue;
			        sum+=x;
					      c++;
					      
					    }  
						if (c!=0) 
						  printf("Average = %.2f\n",(float)sum/c);
						 }
	
	
	
	
	

	



