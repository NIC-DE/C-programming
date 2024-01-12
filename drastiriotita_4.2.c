
#include<stdio.h>
#include<string.h>


char name[20];


main()	

{
	
	system("chcp 1253>nul");
	
	printf("Δωσε ενα ονομα:\t");	
	scanf("% s\n",name);
	printf("%s\n",name);		
	printf("% c\n% c\n% c\n",name[1],name[2],name[3]);
	printf("% c\n",name[strlen(name)-1]);	
	
}
