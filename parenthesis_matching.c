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
int parenthesis_matching(char *s, struct stack *ptr)
{
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == '(')
        {
            ptr->top = ptr->top + 1;
            ptr->arr[ptr->top] = s[i];
        }
        else if (s[i] == ')')
        {
            if (isEmpty(ptr))
            {
                return 0;
            }
            ptr->top = ptr->top - 1;
        }
        i++;
    }
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{

    struct stack *s1 = (struct stack *)malloc(sizeof(struct stack));
    char s[50];
    printf("Enter your expression: ");
    scanf("%s", &s);
    s1->size = strlen(s);
    s1->top = -1;
    s1->arr = (char *)malloc(s1->size * sizeof(char));
    if (parenthesis_matching(s, s1))
    {
        printf("This is matched equation");
    }
    else
    {
        printf("This is unmatched equation");
    }
    free(s1->arr);
    free(s1);
    return 0;
}