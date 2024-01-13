/*ypologismos kenwn diastimatwn*/


#include<stdio.h>
#include<stdlib.h>


main()
{
	int ch,num_of_spaces=0;
	
	
	printf("Dose mia protasi:\n");
		ch=getchar();
		
	while(ch!='\n'){    
	  if(ch==' ')	//min ksexnas na patas to keno diasthma anamesa sta ('')
	  num_of_spaces++;
	  ch=getchar();	
	  
}
	printf("O arithmos twn kenwn einai %d\n",num_of_spaces);
	exit(0);
}
