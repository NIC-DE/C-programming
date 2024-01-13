// C program to swap two variables using a 
// user defined swap() 
#include <stdio.h> 

// This function swaps values pointed by xp and yp 
void swap(int *x, int *y) 
{ 
	int temp = *x; 
	*x = *y; 
	*y = temp; 
} 

int main() 
{ 
	int k, m; 
	printf("Enter Value of x "); 
	scanf("%d", &k); 
	printf("\nEnter Value of y "); 
	scanf("%d", &m); 
	swap(&k, &m); 
	printf("\nAfter Swapping: x = %d, y = %d", k, m); 
	return 0; 
} 

