//paragogiko


#include <stdio.h>

  main()
    {
	  int i, N, j, parag;
	    float sum;
	    
		 do {
		    printf("Dose arithmo:");
			  scanf("%d", &N);  }
			   while (N<=0); 
 
               sum=0.0;
               
			     for (i=1; i<=N; i++) 
				  { 
				   parag=1;
				    
					for (j=1; j<=i; j++)
					         parag*=j;
							    sum+= 1.0/parag;
								 } 
								  printf("SUM= %8.4f", sum);  
}  
