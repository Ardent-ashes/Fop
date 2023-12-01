#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};


void insertAfter(struct Node* previous_node,int index, int new_data)
{
    struct Node* new_node= (struct Node*)malloc(sizeof(struct Node));
    struct Node* demo;

    for(int i=0;i<index;i++)
    {

        previous_node=previous_node->next;
    }

    new_node->data= new_data;
    new_node->next= previous_node->next;
    previous_node->next=new_node;


}

void append(struct Node** head_ref, int new_data)
{
    struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
    struct Node* last= *head_ref;
    new_node->data=new_data;
    new_node->next=NULL;
    if(*head_ref==NULL)
    {

        *head_ref=new_node;
        return;
    }
    while(last->next!=NULL)
    {
        last=last->next;
    }
    last->next=new_node;
}


void print(struct Node* node)
{
    while(node!=NULL)
    {
     printf("%d ",node->data);
     node=node->next;
    }
    printf("\n");
}


void freeList(struct Node* head) {
    struct Node* current = head;
    struct Node* next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
}


int main()
{
    int n,t;
    scanf("%d",&n);
    struct Node* head=NULL;
    while(n--)
    {
        scanf("%d",&t);
        append(&head,t);
        print(head);
    }
    //insertAfter(head, 1);
    int index,element;
    printf("At which index you want to add new element? ");

    scanf("%d",&index);
    printf("Element: ");
    scanf("%d",&element);
    insertAfter(head,index-1, element);

    print(head);
    freeList(head);

}
