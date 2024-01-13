#include<stdio.h>

int main()
{
	char ch;
	int i;
	float f;
	double d;
	double r;
	
	scanf("%c%d%f%d",&ch,&i,&f,&d);
	r=(ch/i)+(f*d)-(f+i);
	
	return(r);
	
	
}
