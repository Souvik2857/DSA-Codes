#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
};
void linkedlistTraversal(struct node *ptr)
{
    while (ptr != NULL)
     {
       printf("The Element is:%d\n", ptr->data);
        ptr = ptr->next;
    }
}
int isEmpty(struct node * ptr){
    if(ptr==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct node * ptr){
    struct node *n=(struct node *)malloc(sizeof(struct node));
    if(n==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
struct node *push(struct node *top,int x){
            if(isFull(top)){
                printf("Stack Overflow");
            }
            else{
                struct node *n=(struct node *)malloc(sizeof(struct node));
                n->data=x;
                n->next=top;
                top=n;
                return top;
            }
}
int pop(struct node ** top){
    if(isEmpty(*top)){
        printf("Stack Underflow");
    }
    else{
       struct node * n=*top;
       *top=(*top)->next;
       int x=n->data;
       free(n);

        return x;
    }
}
int peek_stack(struct node * top,int element){
        for (int i = 1; i <element && top!=NULL; i++)
        {
            top=top->next;
        }
        if(top==NULL){
            printf("The number is not in the list");
        }
        else
        {
            return top->data;
        }    
}
int stackTop(struct node * top){
    return top->data;
}
int stackBottom(struct node * top){
    struct node * ptr=top;
    while (ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    return ptr->data;
    
}
int main(){
    struct node *top=NULL;
    top=push(top,45);
    top=push(top,38);
    top=push(top,6);
    top=push(top,8);
    top=push(top,3);
    top=push(top,59);
    linkedlistTraversal(top);
    int element=pop(&top);
    printf("Poped element is: %d\n",element);
    linkedlistTraversal(top);
    int index=1;
    int peek=peek_stack(top,index);
    printf("At the index %d the element is %d\n",index,peek);
    printf("The stack top value is: %d\n",stackTop(top));
    printf("The stack bottom value is: %d",stackBottom(top));
    return 0;
}