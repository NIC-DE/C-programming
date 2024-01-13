//fibonnacci

#include<stdio.h>


int i,n,prev,last,temp;

int main()

{
 	printf("dose ton  arithmo fibonnacci:");
 	scanf("%d",&n);
 	
 	printf("0\n");
 	printf("1\n");
 	last=0;
 	prev=1;
 	
 	for(i=0;i<10;i++)
 	{
 		temp=last+prev;
 		last=prev;
 		prev=temp;
 		
 		printf("prev=%d\n",prev);
 		
 		
	 }
 	
	
	
	
	
}

