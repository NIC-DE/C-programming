//ypoergasia_1A(1) 

#include<stdio.h>//������ ������������ ��� ������ �������


main()//����� ���������
{
    
    int x=1, y = 3;//�������� ��������
    printf("%d %d\n",x,y);//�������� printf ��� �� ������� �������� x&y
    what(x,y);//��������� what ��� ������ �������� x&y
    printf("%d %d\n",x,y);//�������� � printf �� ������� ���� x&y

}
void what(int a,int b)//��� �� ���� �� �������� ���
{
    a=a+1;
    b=++b;
}
