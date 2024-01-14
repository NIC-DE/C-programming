#include<stdio.h>

#define size 10

int main()
{
	int num_int[size]={1,-9,10,48,3,78,56,95,105,1000};
	int i,j,temp;
	int max;
	for(i=0;i<10;i++){
	
	/*find the largest of the remaing elements*/
	  for(j=i;j<10;j++){
	  
	    if(j>i){
	  
	      /*interchange the two elements*/
	  	  temp=num_int[i];
		  num_int[i]=num_int[j];
		  num_int[j]=temp;
        }
      }
    }
	for(i=0;i<10;i++)
	printf("num_int[%d]=%3d\n",i,num_int[i]);	
	
}
	

