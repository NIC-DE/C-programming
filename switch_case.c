//switch_case_ex

#include<stdio.h>




main()
{
  
  char operator;
  printf("enter an operator: ");
  scanf("%c",&operator);
  
  

switch (operator)
 {
   	
 	
  case 'a': /* if(ch=='a') */  
  printf("alpha\n");
  break;
  
  case 'b': /* else if(ch=='b') */ 
  printf("beta\n");
  break; 
  
  case 'c': /* else if(ch=='c') */
  printf("ci\n");
  break;
  
  default: /* else*/ 
  
  printf("other\n"); 

}
}


