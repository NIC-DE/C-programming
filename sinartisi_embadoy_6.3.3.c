#include<stdio.h>
#include<stdlib.h>


float area(float width,float height);
float width;
float height;

main()
{
system ("chcp 1253>nul");
printf("���� �� ������ ��� �� ����:\n");
scanf("%f %f",&width,&height);
double result;
result=width*height;
return(result);	

printf("%f",result);	
}
