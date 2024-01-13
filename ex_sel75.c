
#include<stdio.h>
#include<string.h>
#define N 10
void squeeze(char s[],int c);


int main()

{  
    int j,i;
    int c=6;
	char s[N]={2,6,5,6,8,7,6,9,4,6};
    squeeze(s,c);
	for (j = 0; j<6; j++) 

    printf("%d",s[j]);
	
    	
}


 /* squeeze:  delete all c from s */ 
   void squeeze(char s[], int c)
      { 
	  int i, j;
      for (i = j = 0; s[i] != '\0'; i++) 
	    if (s[i] != c) 
		    s[j++] = s[i];
			s[j] = '\0';		
			  } 
