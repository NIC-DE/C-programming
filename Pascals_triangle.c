// C program for Pascal’s Triangle 
// A O(n^2) time and O(1) extra space 
// function for Pascal's Triangle 

#include<stdio.h>

void printPascal(int n) 
{ 
int line;
for (line = 1; line <= n; line++) 
{ 
	int C = 1; // used to represent C(line, i) 
	int i;
	for ( i = 1; i <= line; i++) 
	{ 
	printf("%d ", C); // The first value in a line is always 1 
	C = C * (line - i) / i; 
	} 
	printf("\n"); 
} 
} 
// Driver code 
int main() 
{ 
int n = 20; 
	printPascal(n); 
	return 0; 
} 

