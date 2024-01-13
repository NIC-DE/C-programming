//linked_list_proti_moy_lista

#include<stdio.h>
#include<stdlib.h>


main()
{
system("chcp 1253>nul");
	
struct node { 
    int data; 
	struct node *next; }; 
struct node *p, *q, *r, newNODE; 



p= malloc(sizeof(newNODE)); 
p ->data=33;
q= malloc(sizeof(newNODE));
q->data=20;
r= malloc(sizeof(newNODE));
r->data=75; 

p->next=q;
q->next=r;
r->next=NULL; 

main()
{
	
p=head;
while(p!=NULL);
{

printf("%d",p->data);
p=p->next;

}	
	
p=head;
while(p!=NULL);
{

printf("%d",p->data);
p=p->next;

}

p = head;
 sum=0; 
 while (p != NULL) 
 {  sum+= p->data; 
  p = p -> next;
   } 
printf("Sum= %d ", sum); 	
	
}
if (!empty)
printf("Average= %5.2f \n", (float) sum/ (float) plithos);
else 
printf("\n the list is empty.\n"); 	
}

p = head;
 sum=0; plithos=0; empty=0;
 while (p != NULL)
  { 
   sum+= p->data;
   plithos++; 
   p = p -> next; 
		   } 
   If (plithos==0)
   empty=1; 
   if (!empty) 
   printf("Average= %5.2f \n", (float) sum/ (float) plithos);
   else 
   printf("\n the list is empty.\n"); 
	
	
	
	
	
	
	
	
}













}
