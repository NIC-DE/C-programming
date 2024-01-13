//struct_askisi_4

 #include <stdio.h>
 #include <stdlib.h>
 
  struct mathitis 
  {  
    char am[7]; 
	char onoma[30]; 
	float  vathmos; 
  };
	struct mathitis m;
	struct mathitis *p;
   	   
  main()  
  { 
     
     printf("dose am:");
     scanf("%s",m.am);
     printf("dose onoma:");
	 scanf("%s",m.onoma);
	 printf("dose vathmo:");
	 scanf("%f",&m.vathmos);
     p=&m; 
	 printf("%f",m.vathmos);  
  }
