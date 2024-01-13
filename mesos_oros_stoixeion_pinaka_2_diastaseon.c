#include <stdio.h>
#define N 3 
#define M 2 
 
  main()
   { 
   
    system("chcp 1253>nul");
    
    int sum=0, i, j, x[N][M];
    
    
	  float av; 
	  
	   for (i=0; i<N; i++)	   
	      for (j=0; j<M; j++)
		     {
			     printf("Dose to stoixeio x[%d][%d]: ", i+1, j+1);
			     scanf("%d",&x[i][j]);
				    } 
				  for (i=0; i<N; i++)
				    for (j=0; j<M; j++) 
				    sum+=x[i][j]; 
					  av=(float)sum/(N*M); 
					    printf("\nO mesos oros tou pinaka = %.10f \n",av);
} 	   
