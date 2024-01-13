//getchar_putchar


#include <stdio.h>
#define STOP '*'
 
 
   main()
     {
	    char ch; int count = 0;
	    
	   
	    
		  while((ch=getchar())!=STOP)
		    { 
			    putchar(ch);
				   count++ ;
			   } 
			     printf("itan %d xaraktires", count) ;
	 } 

