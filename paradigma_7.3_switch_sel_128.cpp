#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

char op;
int a,b,c;

main(void)
{
system("chcp 1253>nul");
printf("1.προσθεση\n2.αφαιρεση\n3.πολλαπλασιασμος\n4.διαιρεση\n");
printf("\nδιαλεξε πραξη:\t");
scanf("%c",&op);
scanf("%d %d",&a,&b);

switch(op) 
    
{      
    case'+':c=a+b;
	   printf("προσθεση ειναι %d",a+b); 
	break;
	case '-':
	    printf("αφαιρεση ειναι %d",a-b);
	break;
	case '*':
	    printf("πολλαπλασιασμος ειναι %d",a*b);
	break;
	case '/':
	    printf("διαιρεση ειναι %d",a/b);
	break;	
	default:
		printf("η επιλογη δεν υποστηριζεται\n");
	break;	
}
getch();
}
  






