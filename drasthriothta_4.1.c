



/*drastiriotita_4.1*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>


char name[20]="ÄÇÌÏÓÈÅÍÇÓ";

main()	
{
	system("chcp 1253>nul");
	
	printf("%s\n",name);
			
	printf("% c\n% c\n% c\n",name[1],name[2],name[3]);
	printf("% c\n",name[9]);
	
}
