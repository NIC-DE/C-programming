 #include <stdio.h> 
 
 

 int x, y; 
 float z; 
 int *p_1; 
 float *p_2; 
	 main()
	  { 
	  scanf("%d", &x);
	
		scanf("%f", &z); 		
		p_1=&x;  
		printf("x=%d z=%f\n", x, z); 
	    printf("address of x is:%x\n", &x); 
	    printf("p_1 points to : %d\n", *p_1);  
		y=x; 
		printf("y is: %d\n", y);
		
		y=*p_1;
	    printf("y is now: %d\n", y);
	    scanf("%d", &y);
		p_1=&y;   p_2=&z; 
		printf("p_2 points to: %f\n",*p_2);
		printf("p_1 points to: %d\n",*p_1);
		} 
		
