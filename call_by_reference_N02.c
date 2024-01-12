/*call_by_reference_N02*/

#include<stdio.h>

void doublelt(int x,int*p)

{
	
	*p=2*x;
	
}
int main()
{
	int a=16;
	
	doublelt(9,&a);
	printf("%d",a);
	
	return 0;
}
