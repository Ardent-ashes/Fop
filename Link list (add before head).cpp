#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};
void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data=new_data;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
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
int main()
{
    int n,t;
    scanf("%d",&n);
    struct Node* head=NULL;
    while(n--)
    {
        scanf("%d",&t);
        push(&head,t);
        print(head);
    }

}
