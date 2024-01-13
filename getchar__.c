//getchar

#include <stdio.h> 

main()
 { 
    char ch ; 
	 do 
	  {  
	    printf("doste nai/oxi:\n");
		   ch = getchar();
		   printf("\n");
		       } 
		       while ( ( ch != 'N') && (ch != 'O'));
}			     
