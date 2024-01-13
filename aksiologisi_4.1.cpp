#include<stdio.h>
#include<stdlib.h>
main()
{
system("chcp 1253>nul");

char ch;
char choice='A';
char isbn[]="0-387-976-1";

printf("Δωσε ενα χαρακτηρα\n ");
scanf("%s",&isbn);
	
printf("Hello\t");
printf("%s\t",isbn);
printf("%c",choice);
}
