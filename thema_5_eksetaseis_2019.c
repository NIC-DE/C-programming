//thema_5_eksetaseis_2019



#include <stdio.h> 



int main()
 { 
 
   char s[16];
    
	  int i, j = 0; 
	  
	    printf("Enter a string :\n"); 
		scanf("%s",s);; 
		   
		 for(i = 0; s[i] != '\0'; i++) 
		     {   
			if(s[i]!='e'&&s[i]!='E'&&s[i]!='a'&&s[i]!='A'&&s[i]!='p'&&s[i]!='P') 
			       
				 { 
				   s[j] = s[i];
						 
					 j++; 
					 } 						 
					 }  
					 s[j] = '\0'; 
					 printf("String after deletion: %s\n", s);
					 						 
					 return 0;
							 }  
