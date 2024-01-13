//epan_2018_thema_4_a


#include <stdio.h> #include <stdlib.h> 
int main()
 {  
 
 
 system("chcp 1253>nul"); 
 
   int x[5][5], i, j; 
   
    for (i=0; i<5; ++i) 
	  for (j=0; j<5; ++j) 
	      { 		   
		   printf(" %d,%d:",i+1,j+1);
		   scanf("%d", &x[i][j]);
		  } 
		   for (j=0; j<5; ++j)
			 { 
			   for (i=0; i<5; ++i) 
			   printf("%d\t", x[i][j]); 
			   printf("\n");
			   } 
			   return 0; 
			   } 
