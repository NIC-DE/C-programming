//strlen_ex

#include <stdio.h>
#include <string.h>
 
   main()
         { 
         system("chcp 1253>nul");
         
		int i, counter;
	    char x[] = "αρνάκι άσπρο και παχύ";
		counter = 0;         
		  for (i = 0; i < strlen(x); i++)  
	     {               
             if (x[i] == 'π')
			  counter++;
		 }    printf(" αριθμός των π στο %s είναι %d \n ", x, counter); 
} 
