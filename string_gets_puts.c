/*gets_puts*/

#include<stdio.h>

main(void)

{
	char s[30];
	
	printf("enter string>>");
	
	
	gets(s);
	puts(s);
	
	printf("you entered %s",s);
	
}
