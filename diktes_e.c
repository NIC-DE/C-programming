//diktes_e

#include <stdio.h> 
 
main()
 { 
     int objects[]={1, 2, 3, 4, 5}, *p=objects, *q=p+3; 
 
    printf("%d %d %d %d %d\n", objects[1], *p, *(q+1), *q+1,   q-&objects[1]);
}
