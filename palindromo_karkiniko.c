//palindromo_karkiniko


#include <stdio.h>  


 int main(void) 
{
 	int i, p; 
	char x[10]; 
{
	 for(i=0; i<10; i++)
	 	scanf("%c", &x[i]);	
}
    p=1;
	i=0; 
{
	while((i<10/2)&&(p))	
		if(x[i]!=x[9-i])  
		 p=0; 
		 i++;
}	 	
		if(p)
		printf("palindromo"); 
	    else
	    printf("not palindromo");  
}	 				 
