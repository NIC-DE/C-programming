// C program for Pascal’s Triangle 
// A O(n^2) time and O(n^2) extra space 
// method for Pascal's Triangle 

#include<stdio.h>
 #define SIZE 11 
void createPascalsTriangle(int maxrow) 
{ 
// An auxiliary array to store 
// generated pscal triangle values 

int pin[maxrow][maxrow];
// Iterate through every line and print integer(s) in it 
int row;
for (row = 0; row < maxrow; row++) 
{ 
	// Every line has number of integers 
	// equal to line number
	int i; 
	for ( i = 0; i <= row; i++) 
	{ 
	// First and last values in every row are 1 
	if (row == i || i == 0) 
		pin[row][i] = 1; 
	// Other values are sum of values just 
	// above and left of above 
	else
		pin[row][i] = pin[row-1][i-1] + pin[row-1][i]; 
	printf("%d ", pin[row][i]); 
	} 
	printf("\n"); 
} 
} 
// Driver code 
int main() 
{ 
int maxrow = 7; 



	createPascalsTriangle(maxrow); 	
	
	
	
	return 0; 
} 

