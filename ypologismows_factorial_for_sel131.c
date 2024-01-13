/*ypologismos factorial*/

#include<stdio.h>

int main()
{
 int n,i,fact=1.0;
 printf("dose arithmo gia ypologismo tis factorial:\t");
 scanf_s("%d",&n);
 
 
{
  for(i=n;i>=1;i--)
 fact=fact*i;
}

 printf("factorial:%d",fact);
 return 0;	
}
  



