//ginomeno_monodiastaton-pinakon

#include <stdio.h>
 int main(void)
 { 
int i, a[10], b[10], S=0;

         for(i=0; i<10; i++)
		 { 
		    printf("dose stoixeia 1oy pinaka:\n");
		    scanf("%d", &a[i]);
		    printf("dose stoixeia 2oy pinaka:\n");
			scanf("%d", &b[i]); 
		 }     for(i=0; i<10; i++)
		 {  
		        S=S+a[i]*b[i];
		        printf("\n");
		 }  
		        printf("%d ", S);
		 } 
 

