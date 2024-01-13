//w20_tilesynedria_struct

#include <stdio.h>
#define NUM 1000

int main()
 { 
  
 
  struct student
   { 
    char am [4]; 
    onoma[10];
	char eponimo[15];
    float ge[4],
	exams;
    float telikos_vathmos;
	};
	struct student s[NUM]; // pinakas domon student student
	  int i,j;
	  float sum, total=0, success=0, average;
	  
	  for (i=0;i<NUM;i++)
	   { 
	    printf("AM...............: ");
		scanf("%s", s[i].am);
		printf("\nName.............: ");
		scanf("%s", s[i].onoma);
		printf("\nSurname..........: ");
		scanf("%s", s[i].eponimo);
		printf("\n1h grapti ergasia: ");
		scanf("%f", &s[i].ge[0]);
		printf("\n2h grapti ergasia: ");
		scanf("%f", &s[i].ge[1]);
		printf("\n3h grapti ergasia: ");
		scanf("%f", &s[i].ge[2]);
		printf("\n4h grapti ergasia: ");
		scanf("%f", &s[i].ge[3]);
		printf("\nVathmos eksetasis: ");
		scanf("%f", &s[i].exams);
	    sum=0; 
		 for (j=0;j<4;j++) sum+=s[i].ge[j];
		  s[i].telikos_vathmos=0.3*(float)sum/4.0+0.7*s[i].exams;
		  total+=s[i].telikos_vathmos;
}
		  average=(float) total/(float) NUM;  // compute % success  for (i=0;i<NUM;i++)    if (s[i].telikos_vathmos >= 5) success++; 
 
          printf("\nEPITYXIA= %-5.2f \%", ((float) success/(float) (NUM))*100); 
		  printf("\nMESH TIMH BATMOLOGIAS= %-5.2f", average);
} // end-main-program 			
								
								
								
								
								
								
								

			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			    
