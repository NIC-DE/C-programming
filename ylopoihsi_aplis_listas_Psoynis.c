//ylopoihsi_aplis_listas_Psoynis


#include<stdio.h>
#include<stdlib.h>

typedef int elem;     //typos dedomenon listas

struct node{          //typos komvoy
	
elem data;            //dedomena   

struct node *next;	  //epomenos
	
};


typedef struct node LIST_NODE;   //synonymo komvoy listas
typedef struct node *LIST_PTR;   //synonymo deikti komboy


struct node *init(int head);


















main()
{   

    int elem;
     int LIST_PTR,head,prev,current;


    LL_init(&head);
    
    /*eiasagogi toy 1*/
    LL_insert_start(head,1);
    
    printf("\n");
    LL_print(head);
    
    
    /*eisagogi toy 2 stin arxi*/
    
    LL_insert_start(&head,2);
    
    printf("\n");
    LL_print(head);
    
    
     /*eiagogi toy 3 meta*/
     
     LL_insert_after(head,3);
     
     printf("\n");
     LL_print(head);
     
    /*eisagogi toy 4 meta to 2 stoixeio*/
    
    LL_insert_after(head->next,4);
    
    printf("\n");
    LL_print(head);
    
    /*eisagogi toy 5 stin arxi*/
    
    LL_insert_start(&head,5);
    
    printf("\n");
    LL_print(head);
    
    /*eisagogi toy 6 sthn arxi*/
    
    LL_insert_start(&head,6);
    
    printf("\n");
	LL_print(head); 
     
     
     /*epistrefei ta dedomena poy deixnei o diktis*/
     
     elem LL_data(p);
     
     
     /*diagrafi toy stoixeioy meta to 3*/
     
     LL_delete_after(&x,3);
     
     printf("\n");
     LL_delete_after(x);
     
     
     
     
     LL_destroy(&head);     
     
    
    
    
    
    
    
 	
    /*ektyposi listas*/
 	
    
 	LL_print(head);
 	
 	printf("\n");
 	
 	
	 		
	
	
	
	
	
	
}



void LL_init(LIST_PTR*head)

{
  
  *head=NULL;
	
}
 
 /*LL_empty():epistrefei TRUE/FALSE analoga me to an i lista 
 einai adeia*/
 
 int LL_empty(LIST_PTR head)
 {
 	
    	
 	return head==NULL;
 	
 	
 }
 
 
/*LL_data():epistrefei ta dedomena toy komboy
poy deixnei o diktis*/


elem LL_data(LIST_PTR p);
{
	
  return p->data;	
	
	
	
}
 
 /*LL_insertstart():eisagei to stoixeio x
 stin arxi tis listas*/
 
 int LL_insert_start(LIST_PTR*head,elem x)
 {
 	LIST_PTR newnode;
 	
 	newnode=(LIST_NODE*)malloc(sizeof(LIST_NODE));
 	if(!newnode)
 	{
 	  printf("adynamia desmeysis mnimis");
	  return FALSE;		
 		
	}
 	
 	newnode->data=x;
 	
 	newnode->next=*head;
 	*head=newnode;
 	return TRUE;
 	
 }
 
 /*eisagei LL_insert_after():eisagei to stoixeio x
 meta to stoixeio poy deixnei o p*/
 
 int LL_insert_after(LIST_PTR p,elem x)
 {
 	
 	LIST_PTR newnode;
 	
 	newnode=malloc(sizeof(LIST_NODE));
 	if(!newnode) 	
	 {
	 	printf("adynamia desmeysis mnimis");
	 	return FALSE; 	
	 	
	 }
	 
	 newnode->data=x;
	 
	 newnode->next=p->next;
	 p->next=newnode;
	 return TRUE;	
 	
 }
 
 /*LL_delete_start():diagrafei ton komvo poy deixnei h kefali
 tis listas*/
 
 int LL_delete_start(LIST_PTR *head,elem *x)
 {
 	
 	
 	LIST_PTR current;
 	
 	if(*head==NULL)
 	return FALSE;
 	
 	current=*head;
 	*x=current->data;
 	
 	
 	(*head)=(*head)->next;
 	free(current);
 	
 	return TRUE;
 	
 	
 }
 
 /*diagrafi meta apo komvo*/
 
 int LL_delete_after(LIST_PTR prev,elem *x)
 {
   
   LIST_PTR current;
   
   
   if (prev->next==NULL);
     return FALSE;
	 
	 current=prev->next;
	 *x=current->data;
	 
	 
	 prev->next=current->next;
	 free(current);
	 return TRUE;	
 	
 }
 
 /*apodesmeyey ton xvro poy exei desmeysei stin mnimi*/
 
 void LL_destroy(LIST_PTR *head)
 {
 	LIST_PTR ptr;
 	
 	while(*head!=NULL)
 	{
 		ptr=*head;
 		*head=(*head)->next;
 		free(ptr);
 		
    }	
 	
  void LL_print(LIST_PTR head)
  {
  	
  	LIST_PTR  current;
  	
  	current=head;
  	while(current!=NULL)
    {
     	
      printf("%d",current->data);
	  current=current->next;	
    	
    	
    	
	}  	  	
  	
  	
  	
  	
  }	
 	
 	
 	
 	
 	
 	
 	
 	
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
