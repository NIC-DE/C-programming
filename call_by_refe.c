//call_by_refe
#include <stdio.h>

 int a=10; 
 
void func1()
 { 
  int b;
  a++; b++;
  printf("%d-%d",a,b); //typvnei b=1>einai lathos giati den to pernaei me anafora
   } 
int main()
 { 
  int b=2;
  b+=2*a;
  
  printf("**%d**%d**\n",b,a);
  
  func1();
   
  return 0;
} 

