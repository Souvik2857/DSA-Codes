#include <stdio.h>
#include <stdlib.h>
struct double_ended_Queue
{
    int f;
    int r;
    int size;
    int *arr;
};
void queueTraversal(struct double_ended_Queue *q)
{
    printf("Elements are\n");
    for (int i = q->f+1; i <= q->r; i++)
    {
        printf("%d\n", q->arr[i]);
    }
}
int isEmpty(struct double_ended_Queue *q)
{
    if (q->r ==-1)
    {
        return 1;
    }
    return 0;
}
int isFull(struct double_ended_Queue *q)
{
    if (q->r == q->size - 1 && q->f==-1)
    {
        return 1;
    }
    return 0;
}
void enqueueR(struct double_ended_Queue *q, int data)
{
    if (isFull(q))
    {
        printf("Queue Overflow!!!\n");
    }
    else
    {
        q->r = q->r + 1;
        q->arr[q->r] = data;
    }
}
void enqueueF(struct double_ended_Queue *q, int data)
{
    if (q->f == -1)
    {
        printf("Enqueue at first is not avaiablde\n");
    }
    else
    {
        q->arr[q->f] = data;
        q->f = q->f - 1;       
    }
}
int dequeueF(struct double_ended_Queue *q)
{
    int data;
    if(isEmpty(q)){
        printf("Queue is Empty!!\n");
        return -1;
    }
    else{
        q->f=q->f+1;
        data=q->arr[q->f];
        return data;
    }
}
int dequeueR(struct double_ended_Queue * q){
    int data;
    if(isEmpty(q)){
        printf("Dequeue from rear is not available\n");
    }
    else
    {
        data=q->arr[q->r];
        q->r=q->r-1;
        return data;
    }
    

}
int main()
{
    struct double_ended_Queue *q = (struct double_ended_Queue *)malloc(sizeof(struct double_ended_Queue));
    q->f = -1;
    q->r = -1;
    q->size = 5;
    q->arr = (int *)malloc(q->size * sizeof(int));
    enqueueR(q,4);
    enqueueR(q,3);
    enqueueR(q,7);
    enqueueR(q,6);
    enqueueR(q,9);
    dequeueF(q);
    enqueueF(q,47);
    dequeueR(q);
    enqueueR(q,40);
    queueTraversal(q);
    return 0;
}