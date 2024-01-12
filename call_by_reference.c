/*call_by_reference*/

#include<stdio.h>

void swap(int*x,int*y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
void main()
{
	int k=100,m=50;
	
	swap(&k,&m);
	
	printf("k=[%d] kai m=[%d]",k,m);
}
