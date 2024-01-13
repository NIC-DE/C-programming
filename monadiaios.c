//monadiaios


#include <stdio.h>
 #define N 5
    main()
	 {
	     int i, j, k, a[N][N], isident;
		     for (i=0; i<N; i++)
			          for (j=0; j<N; j++)
					    scanf("%d", &a[i][j]);
						  isident =1;
						   for (i=0; i<N; i++)
						          for (j=0; j<N; j++)
								   {  
								    if (i=j && a[i][j]!=1)
								     isident =0;  
									      if (i!=j && a[i][j]!=0)
										   isident =0; 
										         } 
												  if (isident)
												   printf("\n a is identity"); 
												   else
												   printf("\n a is not identity");   

}
