//epanaliptikes_2020

#include<stdio.h>
#include<stdlib.h>

int main()
{
int a,i;
int term;
double sum=0;

do
{   
printf("dose arithmo tripsifio:\n");
scanf("%d",&a);
if(a<100)
printf("o arithmos einai mikroteros toy 100  dose  allo arithmo:\n");

}while(a<100); 

for(i=100; i<a; i++)
{

sum+=i;
term+=i;
printf("%lf\n",sum);
}
return 0;
}

