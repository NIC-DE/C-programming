#include<stdio.h>
#include<stdlib.h>

int year;

main()

{
system ("chcp 1253>nul");



printf("���� ����\n");
scanf("%d",&year);
if((year%400)==0)
printf("�� ���� ����� �������\n");
else if((year%100)==0)
printf("�� ���� ��� ����� �������\n");
else if((year%4)==0)
printf("�� ���� ����� �������\n");
else 
printf("�� ���� ��� ����� �������\n");
system("PAUSE");
return 0;
}
