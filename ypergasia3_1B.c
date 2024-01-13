/*ypoergasia3_1B*/

#include<stdio.h>

void f(int k);

int main()
{
f(7);

void f(int k)
{
	int i;
	if(k==0)
	return;
	printf("%d",k);
	for(i=1;i<k;i=i+2)
	f(i);	
	
}
