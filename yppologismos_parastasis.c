
#include <stdio.h>  
 
main()
  { 
   int i, N, prosimo;
    float sum;
    
	 do { 
	   printf("Dose arithmo:");
	    scanf("%d", &N);
		} 
		while (N<=0);
		
		 sum=0.0; 
		 prosimo=1;
		  
		   for (i=1; i<=N; i++)
		     { 
			    sum+=prosimo*1.0/i;
			    prosimo= (-1)*prosimo;
				 } 
				  printf("SUM= %8.4f", sum);
  }  
