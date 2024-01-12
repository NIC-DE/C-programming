//deiktes

#include<stdio.h>

main()
{
	
int count = 10, *temp=NULL, sum = 0;

temp = &count;//temp=10
*temp = 20;//count=20
temp = &sum;//temp=0
*temp = count;//sum=20

printf("count = %d, *temp = %d, sum = %d\n",   count, *temp, sum );
	
	
	
}
