#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define ADD  '+'
#define SUB  '-'
#define MUL  '*'
#define div  '/'

char op;
float a,b,c;

main(void)
{
system("chcp 1253>nul");
printf("1.��������\n2.��������\n3.���������������\n4.��������\n");
printf("\n������� �����:\t");
scanf("%c",&op);
scanf("%f %f",&a,&b);

switch(op) 
    
{   
   
    if(op>='+' && op<='*')
       printf("�� ���������� ����� %f",c);
   
    case'+':c=a+b;
	   printf("ADD=%f",c); 
	break;
	case '-':
	    printf("SUB=%f",c);
	break;
	case '*':
	    printf("MUL=%f",c);
	break;
	case '/':
	    printf("DIV=%f",c);
	 if(b)
	     c=a/b;
	else
	    printf("\n��� ������������� �������� �� �� �����");	    
	break;	
	
	default:
		printf("� ������� ��� �������������\n");
	break;	
}	
getch();
}
  






