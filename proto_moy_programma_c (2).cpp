/*�� ��������� �������� ��� ��������� ��� ������� ��� ��������� ��� ��� ������� ��� ����� ��� ���� ASCII �������� ����*/
/*������ ����������� ��� ����������� ��� ������� stdio.h*/



#include<stdio.h>
#include<stdlib.h>


main()
{
system("chcp 1253>nul");
	
char ch,next_ch;
printf("���� ��� ���������:\t");
scanf("%c",&ch);

printf("� ASCII  ������� ��� ��������� %c ����:%d\n",ch,ch);
next_ch=ch+1;/*������� ��� ������� ���������*/

printf("� ASCII ������� ��� ��������� %c �����:%d\n",next_ch,next_ch);
}


