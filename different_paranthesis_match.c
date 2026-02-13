#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stack
{
    int size;
    int top;
    char *arr;
};
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
int push(struct stack *ptr, char c)
{
    ptr->top = ptr->top + 1;
    ptr->arr[ptr->top] = c;
    return 1;
}
char pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        return 0;
    }
    else
    {   char x=ptr->arr[ptr->top];
        ptr->top = ptr->top - 1;
        return x;
    }
}
int match(char a,char b){
        if(a=='(' && b==')'){
            return 1;
        }
        if(a=='{' && b=='}'){
            return 1;
        }
        if(a=='[' && b==']'){
            return 1;
        }
    return 0;
        
}
int parenthesis_matching(char *s)
{
    struct stack *s1 = (struct stack *)malloc(sizeof(struct stack));
    s1->size = strlen(s);
    s1->top = -1;
    s1->arr = (char *)malloc(s1->size * sizeof(char));
    char popped_char;
    for (int i = 0; s[i] !='\0'; i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            push(s1, s[i]);
        }
        else if (s[i] == ')' || s[i] == '}' || s[i] == ']')
        {
            if (isEmpty(s1))
            {
                return 0;
            }
            popped_char=pop(s1);
            if(!match(popped_char,s[i])){
                return 0;
            }
        }
    }
    if(isEmpty(s1)){
        return 1;
    }
    else
    {
        return 0;
    }
    
}
int main()
{
    char s[50];
    printf("Enter your expression: ");
    scanf("%s", &s);
    if (parenthesis_matching(s))
    {
        printf("Parenthesis matched");
    }
    else{
        printf("Unmatched parenthesis");
    }
    
    return 0;
}