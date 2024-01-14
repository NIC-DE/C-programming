#include<stdio.h>
#include<ctype.h>

main()

{
int ch;

printf("%c\t %3s\n",65,isalnum (65)?"AN":"");
printf("%c\t%3s\n",'A',isalpha('A')?"A":"");
printf("%c\t%3s\n",'n',isdigit('n')?"D":"");
printf("%c\t%3s\n",92,islower(92)?"L":"");
printf("%c\t%3s\n",32,isspace(32)?"Space":"");
printf("%c\t%c\n",'A',tolower('A'));
printf("%c\t%c\t%c\n",'b',toupper('b'),toupper(tolower('B')));		
}
