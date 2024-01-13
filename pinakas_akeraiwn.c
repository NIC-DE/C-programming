


#include<stdio.h> //header file
#include<stdlib.h>//header file

#define N 5  //estw deka ta stoixeia twn pinakwn A & B


main()


{
	system("chcp 1253>nul");
	int A[N];//pinakas A
	int B[N];//pinakas B
	int C[N];//pinakas apouhkeyshs stoixeiwn meta apo sygkrish
	int i;


	printf("Δωσε 5 ακεραιους:");
	for (i = 0; i < N; i++) {
		printf("\nA[%d]=", i);
		scanf("%d", &A[i]);
	}
	printf("Δωσε 5 ακεραιους:\n");
	for (i = 0; i < N; i++) {
		printf("\nB[%d]=", i);
		scanf("%d", &B[i]);
	}

	{

		for (i = 0; i < N; i++)
			if (A[i] > 0 && A[i] < B[i]) {
				printf("\nTο C[%d]στοιχειο του πινακα C:%d\n", i, A[i]);
			}   else
				printf("\nTο C[%d]στοιχειο του πινακα C:%d\n", i, B[i]);
	    
		       if (-A[i]<0 && A[i]<B[i]){
			      printf("\nTο C[%d]στοιχειο του πινακα C:%d\n", i, A[i]);
		}      else
			      printf("\nTο C[%d]στοιχειο του πινακα C:%d\n", i, A[i]);



	}
	




}
	
	
	
	

     
           
   
   
   
   


    
	
    
    
    
    
    
   
	  
      	

          	
		  
        
			   	

			      	
          	 
          	  
    
          	   	  	
					   
          	   	

          	
          	
          	
          	
		   
          
          	  
          	   
 
          	
		  
        

   	

   	
   	
   	
   	
	 
 
   
    
						   	 			      
	     
    

    	

		 

    

		   



    
    
    
    
    
    
    
	
	



	
	
	
	
	  


	
	
	
	
	
	
	
	
	
	
	
	
	


