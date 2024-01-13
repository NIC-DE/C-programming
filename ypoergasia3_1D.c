/*ypologismos_ginomenoy_akeraiwn*/



#include<stdio.h>   
#include<stdlib.h>     //header files
#include<limits.h>


int i,n,k,j,s,l;   
double ginomeno1;   //thetikoi akeraioi 
double ginomeno2;   //Ektelesa tin praksi toy pollaplasiasmoy treis fores gia na kseperasw to mhnyma toy metaglwtisth enw
                    //ayto telika den mporese na ginei ston ypologismo toy max_ginomenou kai to apotelesma vghke kata
                    //prosegkisi                         
double ginomeno3;   // 
double max_ginomeno;//xrisimopoisame double gia na ekmetaleytoyme perisssotero xwro gia apouhkeysh timvn tiw metavlhths.

  

main()


{  
       system("chcp 1253>nul"); //greek encoding sta windows.
    
       for(i=10;i<110;i++)//vronnxos gia anixneysh dieretwn tou 7
       	if(i%7==0)//synthiki gia na exw diereth toy 7
       printf("\ndieretis toy efta=%d\n");	
			
   
       printf("\ndose arithmoys pou diairoyntai me to 7:\n");
       scanf("%d%d%d%d%d%d",&i,&n,&k,&j,&s,&l);//diabasma stoixeivn sthn eisodo
	   printf("oi arithmoi poy dwsate einai :\t%d\t%d\t%d\t%d\t%d\t%d\t\n\n\n",i,n,k,j,s,l);//kalw printf
	   double ginomeno1=14*21*28*35*42*49;//exodos
	   printf("Το ginomeno[1]=%lf\n",ginomeno1);//ypologismos ginomenoy 1
	   	   
	   
	   printf("dose arithmoys pou diairoyntai me to 7:\n");//omoiws
       scanf("%d%d%d%d%d",&i,&n,&k,&j,&s);
	   printf("oi arithmoi poy dwsate einai:\t%d\t%d\t%d\t%d\t%d\n\n",i,n,k,j,s);
       double ginomeno2=56*63*70*77*84;//exodos
       printf("Το ginomeno[2]=%lf\n",ginomeno2);//ypologismows ginomenoy 2
       
       
  	   printf("dose arithmoys pou diairoyntai me to 7:\n");//omoiws
       scanf("%d%d%d",&i,&n,&k);
	   printf("oi arithmoi poy dwsate einai:\t%d\t%d\t%d\n\n",i,n,k);
       double ginomeno3=91*98*105;//exodos
       printf("Το ginomeno[3] ειναι:%lf\n",ginomeno3);//ypologismos ginomenoy 3
       
	   double max_ginomeno=ginomeno1*ginomeno2*ginomeno3;//synoliko ginomeno max  
	         
       printf("\nto synoliko ginomeno einai:\n[max]=%lf\n",max_ginomeno);
       printf("\n######  fenomeno overflow stack.den apodothike h pragmatiki timi#####\n");
  
  
       system("pause");
}
       
       


       
       
     
					    
						 
       
       
        
      
       
       
       
	     	   	 
  		
		    		
  	    
  									  
  		
  	    
   
       

  
  
  
  
  
  
  
  
  
  	
  
 
	

	
	
	
	
	
	
	
	
	
	

