#include<stdio.h>
#include<stdlib.h>

char ch;
char line[80];

main()
{
	
system("chcp 1253>nul");
printf("���� ��� �������:");
gets(line);
printf("� ������� ��� ������ �����:");
puts(line);
printf("���� ���������:");
ch=getchar();
printf("� ���������� ��� ������ �����:");
putchar(ch);
putchar('\n');
	
}
