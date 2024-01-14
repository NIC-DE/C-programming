#include<stdio.h>
#include<stdlib.h>

char ch;
char line[80];

main()
{
	
system("chcp 1253>nul");
printf("Δωσε μια προταση:");
gets(line);
printf("Η προταση που εδωσες ειναι:");
puts(line);
printf("Δωσε χαρακτηρα:");
ch=getchar();
printf("Ο χαρακτηρας που εδωσες ειναι:");
putchar(ch);
putchar('\n');
	
}
