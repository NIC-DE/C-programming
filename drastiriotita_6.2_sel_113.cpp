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
strcpy(bigstr,str1);        /* � ��������� strcpystrcpy(char dst[], char src[])���������� �� ������������ src ���� ������������ dst.���������� char buffer[128];  strcpy(buffer,�Elearnor Rigby�);*/
printf("bigstr:%s\n",bigstr);
strcat(bigstr,str2);/*� ��������� strcat (char dest[], char src[])���������� �� ������������ str ��� ����� ��� ������������� dest ���������� char name[128];strcpy(name, �John�);strcat(name, � �);strcat(name, �Lennon�);*/
printf("bigstr:% s\n",bigstr);
printf("str1 % s str3\n",strcmp(str1,str3)?"Not equal":"equal");/* int strcmp(s, t)���������������������������� strings. ���������� <0 �� s<t, 0 �� s==t � >0 �� s>t*/
printf("str1 %s\"klea\"\n",strcmp(str1,"klea")?"Not equal":"equal");/* int strlen(s)�������������������������� ���������������������s.*/
  
  ch_ptr=strchr(str1,ch);/*char * strchr(const char * a, int c);���������� ��� ������ ���� ����� �������� ��� ��������� s ��� ������������� a � NULL �� ��� �����������.*/
  printf("%c\n",ch_ptr?*ch_ptr:'#');/*edo den emfanizetai*/
  ch_ptr=strchr(str2,ch);
  printf("%c\n",ch_ptr?*ch_ptr:'#');/*edo  emfanizetai*/
  
}


