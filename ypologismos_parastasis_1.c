//ypologismos_parastasis

#include <stdio.h>
 main()
  { 
  int x[3][3], i, j, sum=0, stop=0;
   for (i=0; i<3; i++)
       for (j=0; j<3; j++)
	    {
		  printf("Dose %d, %d stoixeio\n", i, j);
		   scanf("%d", &x[i][j]);    }
		    for (i=0; (i<3)&&(stop==0); i++) {
			    for (j=0; (j<3)&&(stop==0);j++)
				  if (x[i][j]>=0) sum+=x[i][j];
				  else stop=1;
				     }
					  printf("Athroisma = %d\n", sum); }
