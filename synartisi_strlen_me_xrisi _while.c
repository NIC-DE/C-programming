#include<stdio.h>

#define SIZE 1000

char str;

int mystrlen(char str[]);

main()
{   
    char str[SIZE];
    
    printf("dose ti symbolosira:");
    gets(str);
    
    printf("to mikos tis symbolosiras einai %d",mystrlen(str));
}

int mystrlen(char str[])

{
	int cnt=0;
	cnt=0;
	while(str[cnt]!='\0')
	{
		++cnt;	
	}

	return cnt;
}
