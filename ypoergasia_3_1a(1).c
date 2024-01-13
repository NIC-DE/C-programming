//ypoergasia_1A(1) 

#include<stdio.h>//αρχειο επικεφαλιδας για εισοδο αρχειων


main()//κυρια συναρτηση
{
    
    int x=1, y = 3;//δηλωσεις σταθερων
    printf("%d %d\n",x,y);//καλειται printf για να τυπωσει σταθερες x&y
    what(x,y);//μεταβλητη what που περνει ορισματα x&y
    printf("%d %d\n",x,y);//καλειται η printf να τυπωσει παλι x&y

}
void what(int a,int b)//δεν θα παει να διαβασει εδω
{
    a=a+1;
    b=++b;
}
