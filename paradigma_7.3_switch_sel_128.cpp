#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

char op;
int a,b,c;

main(void)
{
system("chcp 1253>nul");
printf("1.��������\n2.��������\n3.���������������\n4.��������\n");
printf("\n������� �����:\t");
scanf("%c",&op);
scanf("%d %d",&a,&b);

switch(op) 
    
{      
    case'+':c=a+b;
	   printf("�������� ����� %d",a+b); 
	break;
	case '-':
	    printf("�������� ����� %d",a-b);
	break;
	case '*':
	    printf("��������������� ����� %d",a*b);
	break;
	case '/':
	    printf("�������� ����� %d",a/b);
	break;	
	default:
		printf("� ������� ��� �������������\n");
	break;	
}
getch();
}
  






