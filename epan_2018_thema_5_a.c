//epan_2018_thema_5_a


#include <stdio.h> 

int main()
 {
   
  char s[41]; 
   int i, j = 0; 
   
     printf("Enter a string \n"); 
	 scanf("%s",s);
	 
	     for(i = 0; s[i] != '\0'; i++)
		    {  
			   if(s[i]!='k'&&s[i]!='K'&&s[i]!='L'&&s[i]!='l') 
			       {  
				      s[j] = s[i];
					         j++;
							    } 							     
								  } 
								   s[j] = '\0';  
								  printf("String after deletion: %s\n", s); 
								    return 0; 
									} 
