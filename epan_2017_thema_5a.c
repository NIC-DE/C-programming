//epan_2017_thema_5a

#include <stdio.h> 
 
#define STEP 4
#define N 100
 
struct node { 
int num; 
struct node *next; 
}; 
 
typedef struct node ListNode; 
typedef struct node cur; 
 
 
	
void printlist(cur *head)
{
    cur*temp = head;

while (temp != NULL) {
	printf("%d-", temp->num);
    temp=temp->next;
}
printf("\n");	
} 
 
 
 
int main() 

{ 
ListNode *cur, *head, *last;
int i; 
 
head=(ListNode*)malloc(sizeof(ListNode)); 
 
if (!head) 
{ 
printf("Out of memory");
exit (-1);
  }
   head->num = 1; 
   last = head; 
for (i=1; i<N; ++i) 
{
cur = (ListNode *) malloc(sizeof(ListNode)); 

if (!cur)
 { 
 printf("Out of memory"); 
 exit (-1);
 }
 cur->num = last->num + STEP; 
 last->next = cur;
 last = cur; 
} 
 cur->next = NULL; 


 printlist(head);



return 0; 
} 
 
 
