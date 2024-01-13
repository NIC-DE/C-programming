/*strcpy_exsmple*/

#include<stdio.h>
#include<string.h>

main()
{
	char x[]="paradeigma me strcpy";
	char y[25];
	printf("to string tis symvoloseiras ston x einai %s\n",x);
	strcpy(y,x);
	printf("to string tis simvolosiras ston pinaka y eiani %s\n",y);
}
