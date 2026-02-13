#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int * arr;
};
int isEmpty(struct stack* ptr){
    if (ptr->top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}
int main(){
    // first Allocate the memory for stack pointer s
    struct stack *s=(struct stack *)malloc(sizeof(struct stack));
    s->size=6;
    s->top=-1;
    s->arr=(int *)malloc(s->size*(sizeof (int)));
    // manually assign an element into stack
    s->arr[0]=5;
    s->top++;
    //function to chech if stack is empty
    
    if(isEmpty(s)){
        printf("Stack is empty");
    }
    else{
        printf("Stack is not empty");
    }
    return 0;
}