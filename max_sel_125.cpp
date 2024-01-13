#include<stdio.h>
#include<stdlib.h>

int max(int a,int b);
int a;
int b;

main()
{

system ("chcp 1253>null");

printf("Δωσε δυο ακεραιους αριθμους:\n");
scanf("%d %d",&a,&b);

if(a>b)
  return a;
else
  return b;
}


