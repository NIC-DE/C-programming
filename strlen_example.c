/*strlen_example*/

#include<stdio.h>
#include<string.h>

int main()
{
	int i,counter;
	char x[]="arnaki aspro kai paxy";
	counter =0;
	for(i=0;i<strlen(x);i++)
	{
		if (x[i]=='o')counter++;
		
	}
	printf("o aritmos twn p sto %s einai %d\n",x,counter);
	
}
