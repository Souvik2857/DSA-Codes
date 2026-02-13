#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void linkedlistTraversal(struct Node *head)
{
    struct Node *ptr=head;
   do
    {
        printf("Element is %d\n",ptr->data);
        ptr=ptr->next;
    }
    while (ptr!=head);
    
}
struct Node * InsertAtFirst(struct Node * head,int data){
    struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node *p=head->next;
    while (p->next!=head)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;

}
int main()
{
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
    // link sixth node to head node
    sixth->data = 43;
    sixth->next = head;
    linkedlistTraversal(head);
    head=InsertAtFirst(head,80); //For insertion at the first 
    printf("___________Linked List After insertion___________\n");
    linkedlistTraversal(head);
    return 0;
}