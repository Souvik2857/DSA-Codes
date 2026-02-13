#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
    struct Node *previous;
};
void doubly_linked_list_Traversal(struct Node * ptr){
    
    while (ptr!=NULL)
    {
        printf("The element is %d\n",ptr->data);
        ptr=ptr->next;
    }
}
void doubly_linked_list_Alternate_Traversal(struct Node *ptr){
    while (ptr!=NULL)
    {
        printf("Element is %d\n",ptr->data);
        ptr=ptr->previous;
    }
}
struct Node * doubly_linked_list_Insert_At_Index(struct Node * head,int element,int index){
    struct Node * p=(struct Node *)malloc(sizeof(struct Node));
    struct Node * ptr=head;
    struct Node * q=head;
    int i=0;
    while (i!=index-1 && ptr!=NULL)
    {
        ptr=ptr->next;
        i++;
    }
    p->data=element;
    p->next=ptr->next;
    ptr->next=p;
    p->previous=ptr;
    p->next->previous=p;
    if(ptr==NULL){
        printf("Index out of range\n");
        free(p);
        return head;
    }
    
    
    return head;
}
int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;
    // Allocate memory to Heap
    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    fourth=(struct Node *)malloc(sizeof(struct Node));
    fifth=(struct Node *)malloc(sizeof(struct Node));
    // Link the linked list
    // Link the head Node
    head->data=45;
    head->next=second;
    head->previous=NULL;
    // Link the second Node
    second->data=57;
    second->next=third;
    second->previous=head;
    
    // Link the third Node
    third->data=37;
    third->next=fourth;
    third->previous=second;
    // Link the fourth Node
    fourth->data=75;
    fourth->next=fifth;
    fourth->previous=third;
    // Link the fifth Node
    fifth->data=43;
    fifth->next=NULL;
    fifth->previous=fourth;
    printf("Traversal For assending Order\n");
    doubly_linked_list_Traversal(head);
    printf("Traversal For reverse Order\n");
    doubly_linked_list_Alternate_Traversal(fifth);
    printf("---------Inserting element at index position-----\n");
    head=doubly_linked_list_Insert_At_Index(head,78,2);
    doubly_linked_list_Traversal(head);
    doubly_linked_list_Alternate_Traversal(fifth);
    return 0;
}