//diagonios_pinakas

#include <stdio.h>
#define N 5 


  main()
   { 
     int i, j, k, a[N][N], isdiag;
	     
		 for (i=0; i<N; i++)
		    for (j=0; j<N; j++)
		    
			 scanf("%d", &a[i][j]);
			  isdiag=1;
			  
			     for (i=0; i<N; i++)
				    for (j=0; j<N; j++)
				    
					      if (i!=j && a[i][j]!=0)
						   isdiag=0;
						     if (isdiag)
							  printf("\n a is diagonal");
 						      else
							  printf("\n a is not diagonal"); 
 						      
   }							      
