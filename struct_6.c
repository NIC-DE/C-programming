//struct_6

#include <stdio.h>


   struct entry { 
       char fname[20]; 
	   char lname[20];
	   char phone[12];
	    }; 
	struct entry list[4]; 
		
		
		
 main ()
  { 
    int i;
    
	for (i = 0; i < 4; i++)
	      { 
		      printf("\nEnter first name: ");
			   scanf("%s", list[i].fname);
			    printf("Enter last name: ");
				 scanf("%s", list[i].lname);
				   printf("Enter phone in 123-456789 format: ");
				    scanf("%s", list[i].phone);				    
				}
				     printf("\n\n");
					 for (i = 0; i < 4; i++)
					      { 
						   printf("Name: %s %s", list[i].fname,   list[i].lname);
						    printf("\t\tPhone: %s\n", list[i].phone);
					 }      
				    
				}
				    
				    
				    
				    
				    
				    
				    
				    
				    
				    
				    
				    
				    
				    
 
 
 
