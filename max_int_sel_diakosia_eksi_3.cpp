#include<stdio.h>
#include<stdlib.h>

int max(int a,int b);
int a;
int b;

main()
{
system("chcp 1253>nul");
printf("���� ��� ��������� ��������:\n");
scanf("%d %d",&a,&b);	
return(a>b)?a:b;
}


