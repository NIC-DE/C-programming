

#include<stdio.h>
#define N 10


main()

{

  	
int i,x[N];

 /* ��������. �� � ����� ��������� ���� */ 
 
 for (i=0;i<N;i++)/* �������� ������ ��� �� ������*/
  { 
   printf("Dose to %d stoixeio: ",i+1);
   scanf("%d",&x[i]);
  }  
    printf("\n==========================\n");
// �������� ������: for (i=0;i<N;i++)
  /* �������� ������*/ 
   for (i=0;i<N;i++)
  {
  	 printf("%d\t",x[i]);
	 
  	
  }
// ������ �������� ��������� ������:
  int max=x[0]; /*������������ ���������� max*/ 
  
  for (i=1;i<N;i++)  {
    if (x[i]>max)
	   max=x[i];
	   
	    } 
	return max;
	

	
}

