//strcmp

#include <stdio.h> 
#include <string.h>
 
 main()
 
     { 
       system("chcp 1253>nul");
       
	          char x[] = "elephant";
			  char y[]= "car";
			  char z[]= "car";
			  
			     if (strcmp(x,y) == 0)
			     printf("T� string ���� ������ x  %s ����� ��� �� ���� ���� y %s \n", x,y);
				    if (strcmp(x,z) != 0)
					              { printf("�� string ���� ������ x  %s ��� ����� ��� �� ���� ���� z %s \n",x,z);
								   if (strcmp(x,z) < 0) 
								   printf("To string ���� ������ x  %s ���������� ����� ��� z %s \n ", x,z);
							   	   else
								   printf(" �� string ���� ������ z  %s ���������� ����� ��� x %s \n ", z,x);
									} 
								   else //  �� ����������� ���� ��������� 
													
							       printf(" ����� ��� "); 
								   } 
