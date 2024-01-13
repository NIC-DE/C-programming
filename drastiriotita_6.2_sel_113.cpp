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
strcpy(bigstr,str1);        /* Η συνάρτηση strcpystrcpy(char dst[], char src[])Αντιγράφει τη συμβολοσειρά src στην συμβολοσειρά dst.Παράδειγμα char buffer[128];  strcpy(buffer,”Elearnor Rigby”);*/
printf("bigstr:%s\n",bigstr);
strcat(bigstr,str2);/*Η συνάρτηση strcat (char dest[], char src[])Αντιγράφει τη συμβολοσειρά str στο τέλος της συμβολοσειράς dest Παράδειγμα char name[128];strcpy(name, “John”);strcat(name, “ ”);strcat(name, “Lennon”);*/
printf("bigstr:% s\n",bigstr);
printf("str1 % s str3\n",strcmp(str1,str3)?"Not equal":"equal");/* int strcmp(s, t)Ησυνάρτησηαυτήσυγκρίνειταδύο strings. Επιστρέφει <0 αν s<t, 0 αν s==t ή >0 αν s>t*/
printf("str1 %s\"klea\"\n",strcmp(str1,"klea")?"Not equal":"equal");/* int strlen(s)Ησυνάρτησηαυτήεπιστρέφειτο μήκοςτηςσυμβολοσειράςs.*/
  
  ch_ptr=strchr(str1,ch);/*char * strchr(const char * a, int c);Επιστρέφει ένα δείκτη στην πρώτη εμφάνιση του χαρακτήρα s στη γραμματοσειρά a ή NULL αν δεν εμφανίζεται.*/
  printf("%c\n",ch_ptr?*ch_ptr:'#');/*edo den emfanizetai*/
  ch_ptr=strchr(str2,ch);
  printf("%c\n",ch_ptr?*ch_ptr:'#');/*edo  emfanizetai*/
  
}


