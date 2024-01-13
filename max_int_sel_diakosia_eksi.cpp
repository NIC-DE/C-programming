#include<stdio.h>
#include<stdlib.h>

int max(int a,int b,int c);
int a;
int b;
int c;

main()
{
	
int max;	

system("chcp 1253>nul");
printf("Δωσε τρεις ακεραιους αριθμους:\n");
scanf("%d %d %d",&a,&b,&c);
if(a>b)
  if(a>c)
    return a;      
  else
    return c;
else if(b>c)   
    return b;
  else
    return c; 
}


