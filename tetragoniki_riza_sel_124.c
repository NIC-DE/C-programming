/*tetragoniki riza*/


#include<stdio.h>
#include<stdlib.h>
#include<math.h>/*���������� ����������� �����������*/

main()
{
system ("chcp 1253>nul");

double num ;

printf("���� ��� ������ ������:\t");
scanf("% lf",&num );
if(num <0)
  printf("����� �������:������� ���������\n");
else
  printf("� ����������� ���� ��� % lf ����� % lf\n",num ,sqrt(num )); 
  
exit(0);

}

