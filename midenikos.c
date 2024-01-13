//midenikos

#include <stdio.h>
 #define N 5
    main()
	 {    int i, j, k, a[N][N], isnull;
	     for (i=0; i<N; i++)
		          for (j=0; j<N; j++)
				       scanf("%d", &a[i][j]);
					     isnull =1;
						    for (i=0; i<N; i++)
							       for (j=0; j<N; j++) 
								          if (a[i][j]!=0)
										   isnull =0;
										     if (isnull)
											  printf("\n a is null matrix");
											  else 
											  printf("\n a is not null matrix");
											   }
											   
