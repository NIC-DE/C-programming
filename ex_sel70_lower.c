//sel_70

#include<stdio.h>
#include<ctype.h>


int lower(int c);
main()
{   
    
    char c='Z';
	lower(c);
	
}
int lower(int c)
{
	
	if(c>='A' && c<='Z')
	  return c +'a'-'A';
	else
	  return c; 
	
}
