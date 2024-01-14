#include<stdio.h>
#include<string.h>

char str1[]="klea";
char str2[]="nthis";
char str3[]="klea";

char ch='s';

char bigstr[50];

main()
{
	
char*ch_ptr;

printf("bigstr:%s\n",bigstr);
strcpy(bigstr,str1);        /* Ç óõíÜñôçóç strcpystrcpy(char dst[], char src[])ÁíôéãñÜöåé ôç óõìâïëïóåéñÜ src óôçí óõìâïëïóåéñÜ dst.ÐáñÜäåéãìá char buffer[128];  strcpy(buffer,”Elearnor Rigby”);*/
printf("bigstr:%s\n",bigstr);
strcat(bigstr,str2);/*Ç óõíÜñôçóç strcat (char dest[], char src[])ÁíôéãñÜöåé ôç óõìâïëïóåéñÜ str óôï ôÝëïò ôçò óõìâïëïóåéñÜò dest ÐáñÜäåéãìá char name[128];strcpy(name, “John”);strcat(name, “ ”);strcat(name, “Lennon”);*/
printf("bigstr:% s\n",bigstr);
printf("str1 % s str3\n",strcmp(str1,str3)?"Not equal":"equal");/* int strcmp(s, t)ÇóõíÜñôçóçáõôÞóõãêñßíåéôáäýï strings. ÅðéóôñÝöåé <0 áí s<t, 0 áí s==t Þ >0 áí s>t*/
printf("str1 %s\"klea\"\n",strcmp(str1,"klea")?"Not equal":"equal");/* int strlen(s)ÇóõíÜñôçóçáõôÞåðéóôñÝöåéôï ìÞêïòôçòóõìâïëïóåéñÜòs.*/
  
  ch_ptr=strchr(str1,ch);/*char * strchr(const char * a, int c);ÅðéóôñÝöåé Ýíá äåßêôç óôçí ðñþôç åìöÜíéóç ôïõ ÷áñáêôÞñá s óôç ãñáììáôïóåéñÜ a Þ NULL áí äåí åìöáíßæåôáé.*/
  printf("%c\n",ch_ptr?*ch_ptr:'#');/*edo den emfanizetai*/
  ch_ptr=strchr(str2,ch);
  printf("%c\n",ch_ptr?*ch_ptr:'#');/*edo  emfanizetai*/
  
}


