#include <stdio.h>
#include <stdlib.h>
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
// case:1 Delete the first element from linked list
struct Node * deleteFirst(struct Node * head){
    struct Node * ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
// case:2 Delete the given index element from linked list
struct Node * deleteAtIndex(struct Node * head,int index){
    struct Node *p=head;
    struct Node *q=head->next;
    for (int i = 0; i < index-1; i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;  
}
// case:3 Delete the last element from linked list
struct Node * deleteAtLast(struct Node * head){
    struct Node *p=head;
    struct Node *q=head->next;
    while (q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;  
}
// case:4 Delete the given element with a given value from linked list
struct Node * deleteAtGivenValue(struct Node * head,int value){
    struct Node *p=head;
    struct Node *q=head->next;
    while(q->data!=value && q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    if (q->data==value)
    {
        p->next=q->next;
        free(q);
    }
    
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
    // link sixth node to sixth node
    sixth->data = 43;
    sixth->next = NULL;
    printf("___________Linked List before Deletion___________\n");
    linkedlistTraversal(head);
    //head=deleteFirst(head); //For deleting the first element of the Linked list
    //head=deleteAtIndex(head,2); //for deleting at given index
    //head=deleteAtLast(head); //for deleting last element
    head=deleteAtGivenValue(head,78); //for deleting given value of element
    printf("___________Linked List After Deletion___________\n");
    linkedlistTraversal(head);

    return 0;
} 