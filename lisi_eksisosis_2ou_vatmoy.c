

#include <stdio.h>
#include <math.h>

int  main()
 
{ 
system("chcp 1253>nul");
 
float a,b,c,riza1,riza2,diakrinousa;

printf("��������  ��� ���������� a : \n");
scanf("%d",&a);
printf("��������  ��� ���������� b : \n");  
scanf("%d",&b);
printf("��������  ��� ���������� c : \n");scanf("%d",&c);

diakrinousa=b*b-4*a*c;

  if (diakrinousa>0) 
	   { 
	    riza1=(-b+ sqrt(diakrinousa))/(2*a); 
	    riza2=(-b- sqrt(diakrinousa))/(2*a);
	    printf(" �� ����� �����: %f ��� %f \n",riza1,riza2);
	    }
	    else if (diakrinousa==0)
	    
		{ riza1=(-b/(2*a));
	    printf(" ����� ���� : %f \n",riza1); 
	    }
		else
	    	printf(" ��� �������� �����������  ����� \n");
		 
	    return 0;
 }                    /* ����� ������������ */ 











