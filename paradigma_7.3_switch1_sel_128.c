#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

char op;
int a,b,c;

main(void)
{
system("chcp 1253>nul");
printf("1.đńďóčĺóç\n2.áöáéńĺóç\n3.đďëëáđëáóéáóěďň\n4.äéáéńĺóç\n");
printf("\näéáëĺîĺ đńáîç:\t");
scanf("%c",&op);
scanf("%d %d",&a,&b);

switch(op) 
    
{      
    case'+':c=a+b;
	   printf("đńďóčĺóç ĺéíáé %d",a+b); 
	break;
	case '-':
	    printf("áöáéńĺóç ĺéíáé %d",a-b);
	break;
	case '*':
	    printf("đďëëáđëáóéáóěďň ĺéíáé %d",a*b);
	break;
	case '/':
	    printf("äéáéńĺóç ĺéíáé %d",a/b);
	break;	
	default:
		printf("ç ĺđéëďăç äĺí őđďóôçńéćĺôáé\n");
	break;	
}
getch();
}
  






