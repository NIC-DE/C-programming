#include<stdio.h>
#include<stdlib.h>


main()
{ 

    system("chcp 1253>nul");
    
	int num1;
	int num2;
	int max;
	
	printf("���� ��� ��������� ��������:\n");
	
	scanf("%d\n %d",&num1,&num2);
	max=num1<num2 ? num1 : num2;
			
	printf("� ���������� ����� � %d\n",max);
}


