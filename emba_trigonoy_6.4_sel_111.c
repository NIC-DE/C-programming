#include<stdio.h>
#include<stdlib.h>


float triangle_area(float base,float height);
float base,height;



main()
{
system ("chcp 1253>nul");

printf("���� �� ���� ��� �� ����:\n");
scanf("%f %f",&base,&height);
double result;
result=(base*height/2); /*������ ��������=�*�/2*/
return(result);	/*���������� ������ ����������*/

printf("%f",result);	
}
