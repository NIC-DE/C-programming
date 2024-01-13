//telikes_2017_thema3_a

#include<stdio.h>
#include<string.h>

int main()
{
	int i,pl=0 ,pu=0 ,len;
	char text[51];
	
	
	printf("insert text at most 50 characters):");
	scanf("%50s",text);
	
	len=strlen(text);
	
	for(i=0;i<len;i++)
	   if(text[i]>='a'&& text[i]<='z')
	   ++pl;
	   else if(text[i]>='A'&& text[i]<='Z')
	   ++pu;
	   
	   printf("\npeza:%d\nkefalaia:%d\n",pl,pu);
	   
	   return 0;
	
}

