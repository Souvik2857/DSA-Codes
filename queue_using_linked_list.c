#include <stdio.h>
#include <stdlib.h>
// for updating the value we use these as global variable
struct node *f = NULL;
struct node *r = NULL;
struct node
{
    int data;
    struct node *next;
};
void linkedlistTraversal(struct node *ptr)
{
    printf("Printing the elements of this linkedlist\n");
    while (ptr != NULL)
    {
        printf("The Element is:%d\n", ptr->data);
        ptr = ptr->next;
    }
}
void enqueue(int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL)
    {
        printf("Queue is full");
    }
    else
    {
        n->data = data;
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
}
int dequeue(){
    int data=-1;
    struct node *p=f;
    if(f==NULL){
        printf("Queue is Empty\n");
        return data;
    }
    else
    {
        data=p->data;
        f=f->next;
        free(p);
        return data;
    }
    

}
int main()
{
    enqueue(4);
    enqueue(5);
    enqueue(2);
    enqueue(32);
    linkedlistTraversal(f);
    printf("Dequeue element is %d\n",dequeue());
    printf("Dequeue element is %d\n",dequeue());
    printf("Dequeue element is %d\n",dequeue());
    printf("Dequeue element is %d\n",dequeue());
    printf("Dequeue element is %d\n",dequeue());
    return 0;
}