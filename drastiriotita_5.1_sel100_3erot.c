#include<stdio.h>
#include<stdlib.h>


main()
{  

    system("chcp 1253>nul");
	int num1;
	int num2;
	int num3;
	int max1;
	int max2;
		
	printf("Äùóå ôñåéò áêåñáéïõò áñéèìïõò:\n");	
	scanf("%d   %d   %d",&num1,&num2,&num3);
	max1=num1>num2?num1:num2;
	max2=max1>num3?max1:num3;			
	printf("Ï ìåãáëõôåñïò  åéíáé ï %d\n",max2);
}


