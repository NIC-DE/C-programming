#include <stdio.h>
#include <stdlib.h>

#define ELEMENTS 3

struct list
{
    int id;
    struct list *next;

}typedef Node;

struct list *initNode(int v);
void printList(struct list *head);
struct list *insertAtEnd(struct list *head, struct list *node);
int checkInput(int num);
int reverseInput(int num);

int main()
{
    //this will be the head of the new list
    struct list *head = NULL;
    int val;
    int i;


    for(i = 0; i<ELEMENTS; i++)
    {
        printf("Type a number to add:");
        scanf("%d",&val);

        //defensive programming concerning input
        while(checkInput(val) != 1)
            {
                printf("Type a number to add:");
                scanf("%d",&val);

            }

        //create a node, then append on list
        struct list *newNode = initNode(reverseInput(val));
        head = insertAtEnd(head, newNode);
    }

    //print what we've done
    printList(head);

    //free space used
    freeList(head);


}

int checkInput(int num)
{

    if((num < 99) && (num > 9))
        return 1;
    return 0;
}

struct list *initNode(int v)
{
    struct list* node = (struct list *)malloc(sizeof(Node));
    node->next = NULL;
    node->id = v;

    return node;
}

struct list *insertAtEnd(struct list *head, struct list *node)
{
    struct list *curr = head;
    if(head == NULL)
    {
        //empty list
        head = node;
        return head;
    }
    //find the end of the given list
    while(curr->next != NULL)
    {
          curr = curr->next;

    }
    //connect the end and the new node
    curr->next = node;
    return head;
}
void printList(struct list *head)
{
    struct list *curr = head;
    int prod = 1;

    while(curr != NULL)
    {
        prod = prod*(curr->id);
        printf("ID: %d\n", curr->id);
        curr = curr->next;

    }

    printf("Product of elements in List: %d\n",prod);

}


void freeList(struct list *head)
{

    while(head != NULL)
    {
         free(head);
         head = head->next;
    }


}

int reverseInput(int num)
{

    int tens = num/10;
    int ones = num%10;

    return(ones*10 + tens);

}
