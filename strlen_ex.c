//strlen_ex

#include <stdio.h>
#include <string.h>
 
   main()
         { 
         system("chcp 1253>nul");
         
		int i, counter;
	    char x[] = "������ ����� ��� ����";
		counter = 0;         
		  for (i = 0; i < strlen(x); i++)  
	     {               
             if (x[i] == '�')
			  counter++;
		 }    printf(" ������� ��� � ��� %s ����� %d \n ", x, counter); 
} 
