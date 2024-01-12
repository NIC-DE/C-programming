
//deiktes


#include<stdio.h>


main()
{
	
	
int a = 100, b = 88, c = 8;
int *p1 = &a, *p2, *p3 = &c;
p2 = &b;
p2 = p1;
b = *p3;
*p2 = *p3;

printf("%d %d %d", a, b,c) ;	
	
	
}
