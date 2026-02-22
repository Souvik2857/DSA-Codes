#include <stdio.h>
#include <stdlib.h>

struct circularQueue
{
    int size;
    int front;
    int back;
    int *arr;
};
int isEmpty(struct circularQueue *q)
{
    if (q->front == q->back)
    {
        return 1;
    }

    return 0;
}
int isFull(struct circularQueue *q)
{
    if ((q->back+1)%q->size==q->front)
    {
        return 1;
    }

    return 0;
}
void enqueue(struct circularQueue *q, int data)
{
    if (isFull(q))
    {
        printf("circularQueue Overflow!!!\n");
    }
    else
    {
        q->back = (q->back + 1)%q->size;
        q->arr[q->back] = data;
        printf("Enqueued element is %d\n",data);
    }
}
int dequeue(struct circularQueue *q)
{
    int data;
    if(isEmpty(q)){
        printf("circularQueue is Empty!!\n");
        return -1;
    }
    else{
        q->front=(q->front+1)%q->size;
        data=q->arr[q->front];
        return data;
    }
}
int main()
{
    struct circularQueue *q = (struct circularQueue *)malloc(sizeof(struct circularQueue));
    q->size = 4;
    q->front = q->back = 0;
    q->arr = (int *)malloc(q->size * sizeof(int));
    // queue insertion Operation
    enqueue(q, 5);
    enqueue(q, 48);
    enqueue(q, 10);
    enqueue(q, 26);
    // For displaying the elements
    for (int i = 0; i <= q->back; i++)
    {
        printf("%d\n", q->arr[i]);
    }
    // queue element removal Operation
    
    printf("Dequeue value is %d\n",dequeue(q));
    printf("Dequeue value is %d\n",dequeue(q));
    printf("Dequeue value is %d\n",dequeue(q));
    printf("Dequeue value is %d\n",dequeue(q));
    enqueue(q, 26);
    enqueue(q, 26);
    enqueue(q, 26);

    if(isEmpty(q)){
        printf("Queue is Empty\n");
    }
    if (isFull(q))
    {
        printf("Queue is full\n");
    }
    

    return 0;
}