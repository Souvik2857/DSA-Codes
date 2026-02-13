#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void linkedlistTraversal(struct Node *ptr)
{
    while (ptr != NULL)
     {
       printf("The Element is:%d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct Node * InsertAtfirst(struct Node *head,int data){
    struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}
struct Node * InsertAtIndex(struct Node *head,int data,int index){
    struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));
    struct Node * p=head;
    int i=0;
    while (i != index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
struct Node * InsertAtLast(struct Node *head,int data){
    struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node * p=head;
    int i=0;
    while (p->next != NULL)
    {
        p=p->next;
        i++;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}
struct Node * InsertAfterNode(struct Node *head,int data,struct Node * prevNode){
    struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=prevNode->next;
    prevNode->next=ptr;
    return head;
}
int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;
    struct Node *sixth;
    // Allocate memory for nodes in the Linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));
    sixth=(struct Node *)malloc(sizeof(struct Node));
    // link first node to second node
    head->data = 44;
    head->next = second;
    // link second node to third node
    second->data = 74;
    second->next = third;
    // link third node to fourth node
    third->data = 34;
    third->next = fourth;
    // link fourth node to fifth node
    fourth->data = 78;
    fourth->next = fifth;
    // link fifth node to sixth node
    fifth->data = 49;
    fifth->next = sixth;
    // link sixth node to sixth node
    sixth->data = 43;
    sixth->next = NULL;
    linkedlistTraversal(head);
    printf("\n");
    // head=InsertAtfirst(head,45);
    // head=InsertAtIndex(head,45,4);
    // head=InsertAtLast(head,45);
    head=InsertAfterNode(head,45,third);
    linkedlistTraversal(head);
    return 0;
}
