/*το προγραμμα διαβαζει ενα χαρακτηρα και τυπωνει τον χαρακτηρα και τον επομενο του καθως και τους ASCII κωδικους τους*/
/*εντολη επεξεργαστη για συμπεριληψη του αρχειου stdio.h*/



#include<stdio.h>
#include<stdlib.h>


main()
{
system("chcp 1253>nul");
	
char ch,next_ch;
printf("Δωσε ενα χαρακτηρα:\t");
scanf("%c",&ch);

printf("ο ASCII  κωδικας του χαρακτηρα %c εινα:%d\n",ch,ch);
next_ch=ch+1;/*βρισκει τον επομενο χαρακτηρα*/

printf("ο ASCII κωδικας του χαρακτηρα %c ειναι:%d\n",next_ch,next_ch);
}


