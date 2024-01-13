//struct_7_xoris_dikti


#include <stdio.h> 

#define MAX 4 
 
 struct part
  { 
  int number;
  char name[10];
	  }
 data[MAX] ={
	  1, "Maria",
	  2, "Elena",
	  3, "Andriana",
	  4, "Christina"
	  }; 
	    
		 int count;
		
	main ()
	 { 
	  
 
        for (count = 0; count < MAX; count++) 
		    { 
			        printf("%d %s\n",data[count].number,data[count].name);
					         
							      }
 } 	 

