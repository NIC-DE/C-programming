//epanaliptikes_2018_thema_4_a


#include <stdio.h>
 #include <stdlib.h> 
 int main()
  {  
  system("chcp 1253>nul"); 
    int x[4][5],
	 i, j,t=0; 
	  for (i=0; i<4; ++i)
	    for (j=0; j<5; ++j) 
		{ t=t+1;  
		 x[i][j]=t; 
		} 
	     for (j=0; j<5; ++j) 
				   { 
		  for (i=0; i<4; ++i) 
		   printf("%d\t", x[i][j]); 
		   printf("\n");
			} return 0; 
		    } 
 



