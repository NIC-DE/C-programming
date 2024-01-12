
/*printing a number as a chararacter string*/

#include<stdio.h>


void printd(int n);


int main()

{	
	printd(1821);
	printf("\n");
	
}

	
   	
void printd(int n)	
/*print in decimal*/
{
	
	
	int i;
	
	

	
	
	if(i<0){
		putchar('-');
		n=-n;
		
	}

    if((i=n/10)!=0)
    printd(i);
    putchar(i%10+'0');

}		
	
	


