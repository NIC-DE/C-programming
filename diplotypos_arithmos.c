// C code to find 
// duplicates in O(n) time 
#include <stdio.h> 
#include <stdlib.h> 

// Function to print duplicates 

void printRepeating(int arr[], int size) 
{ 
int i; 
printf("The repeating elements are: \n"); 
for (i = 0; i < size; i++) 
{ 
	if (arr[abs(arr[i])] >= 0) 
	arr[abs(arr[i])] = -arr[abs(arr[i])]; 
	else
	printf(" %d ", abs(arr[i])); 
} 
} 

int main() 
{ 
int arr[] = {1,1,6,9,7,6,3,8,7,6,3,1,5,8}; 
int arr_size = sizeof(arr)/sizeof(arr[0]); 
printRepeating(arr, arr_size); 
getchar(); 
return 0; 
} 

