//sel_69

#include<stdio.h>
#include<string.h>


int atoi(char s[]);
main()
{
	
	char s[]="F";//koita ston ascii
	atoi(s);
	
}
//atoi: metatrepei to s se akeraio
int atoi(char s[])
{
	int i,n;	
	n=0;
	for(i=0; s[i]>='0' && s[i]<='9'; ++i)
	n=10*n+(s[i]-'0');
	
	
	
	
	
}
