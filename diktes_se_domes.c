//diktes_se_domes

 #include <stdio.h> 
 
 struct mathitis {  
    char am[7];
	char onoma[30];
    float  vathmos;
	}; 
	 struct mathitis m ;
	 struct mathitis *p;  
	
    main()  
	 { 
	 
	     printf("dose aritjmo mitroou:");
		 scanf("%s",m .am);  
		 printf("dose onoma:");
		 scanf("%s",m .onoma);
		 printf("dose vathmo:");		 
	     scanf("%f",&m .vathmos);
		 p=&m;
		 printf("%s",p->onoma); 
			 }     
