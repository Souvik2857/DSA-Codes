#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int isFull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isEmpty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;
    }
    else
    {
        return 0;
    }
    
}
void push(struct stack *ptr, int data){
        if(isFull(ptr)){
            printf("Stack is Full\n");
            printf("Warning Stack Overflow\n");
        }
        else{
            ptr->top=ptr->top+1;
            ptr->arr[ptr->top]=data;
            printf("Data is Successfully inserted to stack\n");
            printf("...........Now the Stack is.......\n");
            for (int i = 0; i <= ptr->top; i++)
            {
                printf("%d ",ptr->arr[i]);
            }
            printf("\n");
        }
}
int pop(struct stack *ptr){
        if(isEmpty(ptr)){
            printf("Stack is Empty\n");
            return 0;
        }
        else{
            int x=ptr->arr[ptr->top];         
            ptr->top--;
            return x;
        }
}
int main(){
    struct stack *sp=(struct stack *)malloc(sizeof(struct stack));
    sp->size=10;
    sp->top=-1;
    sp->arr=(int *)malloc(sp->size * sizeof(int));
    printf("Stack has been created successfully\n");
    // check stack if its Full or Empty
    // if(isFull(sp)){
    //     printf("Stack is full\n");
    // }
    if(isEmpty(sp)){
        printf("Stack is empty\n");
    }
    // Push operation
    push(sp,5);
    push(sp,5);
    push(sp,5);
    push(sp,5);
    push(sp,5);
    push(sp,7);
    push(sp,5);
    push(sp,5);
    push(sp,5);
    push(sp,9);
    push(sp,5);
    push(sp,5);
    // implementing pop operation
    printf("The element is %d\n",pop(sp));
    printf("The element is %d\n",pop(sp));
    printf("The element is %d\n",pop(sp));
    printf("The element is %d\n",pop(sp));
    printf("The element is %d\n",pop(sp));
    printf("The element is %d\n",pop(sp));
    printf("The element is %d\n",pop(sp));
    printf("The element is %d\n",pop(sp));
    printf("The element is %d\n",pop(sp));
    printf("The element is %d\n",pop(sp));
    printf("The element is %d\n",pop(sp));
    // if(isEmpty(sp)){
    //     printf("Stack is empty\n");
    // }
    return 0;
}