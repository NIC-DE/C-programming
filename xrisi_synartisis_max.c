#include<stdio.h>
#include<stdlib.h>



int max(int*a, int*b);


int main()

{
	int max_value, num1, num2;

	printf("dose dyo aritmoys:\n");
	scanf("%d%d",&num1,&num2);

	
	
	max_value = max(&num1,&num2);
}

int max(int* a, int* b)
{
	return(*a>*b? *a:*b);
}
