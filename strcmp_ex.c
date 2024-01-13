//strcmp

#include <stdio.h> 
#include <string.h>
 
 main()
 
     { 
       system("chcp 1253>nul");
       
	          char x[] = "elephant";
			  char y[]= "car";
			  char z[]= "car";
			  
			     if (strcmp(x,y) == 0)
			     printf("Tο string στον πίνακα x  %s είναι ίσο με αυτό στον y %s \n", x,y);
				    if (strcmp(x,z) != 0)
					              { printf("Το string στον πίνακα x  %s ΔΕΝ είναι ίσο με αυτό στον z %s \n",x,z);
								   if (strcmp(x,z) < 0) 
								   printf("To string στον πίνακα x  %s ΠΡΟΗΓΕΙΤΑΙ αυτού του z %s \n ", x,z);
							   	   else
								   printf(" Το string στον πίνακα z  %s ΠΡΟΗΓΕΙΤΑΙ αυτού του x %s \n ", z,x);
									} 
								   else //  Σε οποιαδήποτε άλλη περίπτωση 
													
							       printf(" Είναι ίσα "); 
								   } 
