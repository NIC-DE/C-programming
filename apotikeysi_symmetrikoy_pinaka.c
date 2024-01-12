
//apotikeysi_symmetrikoy_pinaka



 #include <stdio.h>
 #define N 5
 #define M 15
   
   
    main()
	 { 
	    int i, j, k, a[N][N], b[M];
		 for (i=0; i<N; i++) 
		   for (j=0; j<N; j++) 
			 scanf("%d", &a[i][j]); 
                k=0;
				for (i=0; i<N; i++)
				 for (j=0; j<=i; j++)
			 	 { 
				 b[k]=a[i][j];
				 k++;
		         } 													       
				 k=0; 
				 for (i=0; i<N; i++) 
				  for (j=0; j<M;j++) 
				  if  (j>=i)
					{  
					 b[k]=a[i][j]; 
				     k++;														   
      }  
}
