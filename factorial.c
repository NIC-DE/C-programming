
#include<stdio.h>

int main()
{
	int i=1,factorial=1;
	int n;
	do              /*elnenxos oti ta dedomena eisodoy einai sosta*/
	{
		printf("enter a number(1-12):");
		scanf("\n%d",&n);		
	}
    while(n<1||n>12);
    
    while(i<=n)
    {
    	factorial*=i;
    	i++;
    	
	}
	printf("the factorial of %d is %d\n",n,factorial);
	return 0;
}
