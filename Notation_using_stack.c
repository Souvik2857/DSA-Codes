#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stack
{
    int size;
    int top;
    char *arr;
};
char stackTop(struct stack *ptr)
{
    return ptr->arr[ptr->top];
}
int isFull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack *ptr, char data)
{
    if (isFull(ptr))
    {
        printf("Stack is Full\n");
        printf("Warning Stack Overflow\n");
    }
    else
    {
        ptr->top = ptr->top + 1;
        ptr->arr[ptr->top] = data;
    }
}
char pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack is Empty\n");
        return 0;
    }
    else
    {
        char x = ptr->arr[ptr->top];
        ptr->top--;
        return x;
    }
}
int precedence(char ch)
{
    if (ch == '*' || ch == '/')
    {
        return 3;
    }
    else if (ch == '+' || ch == '-' || ch == '%')
    {
        return 2;
    }
    else
    {
        return 0;
    }
}
int isOperator(char ch){
    if(ch=='*' || ch=='/' || ch=='+' || ch=='-' || ch=='%'){
        return 1;
    }
    else
    {
        return 0;
    }
    
}
char *infixToPostfix(char *infix)
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    char *postFix = (char *)malloc((strlen(infix) + 1) * sizeof(char));
    int i = 0; // for scanning the elements
    int j = 0; // to do the postfix in the array
    while (infix[i] != '\0')
    {
        if (!isOperator(infix[i]))
        {
            postFix[j] = infix[i];
            j++;
            i++;
        }
        else
        {
            if (precedence(infix[i]) > precedence(stackTop(sp)))
            {
                push(sp, infix[i]);
                i++;
            }
            else
            {
                postFix[j] = pop(sp);
                j++;
            }
        }
    }
    while (!isEmpty(sp))
    {
        postFix[j] = pop(sp);
        j++;
    }
    postFix[j] = '\0';
    return postFix;
}
int main()
{
    char *infix = "x-y/z-k*d";
    char *postfix=infixToPostfix(infix);
    printf("%s",postfix);
    return 0;
}