#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    int size;
    int front;
    int back;
    int *arr;
};
int isEmpty(struct Queue *q)
{
    if (q->front == q->back)
    {
        return 1;
    }

    return 0;
}
int isFull(struct Queue *q)
{
    if (q->back == q->size - 1)
    {
        return 1;
    }

    return 0;
}
void enqueue(struct Queue *q, int data)
{
    if (isFull(q))
    {
        printf("Queue Overflow!!!\n");
    }
    else
    {
        q->back = q->back + 1;
        q->arr[q->back] = data;
    }
}
int dequeue(struct Queue *q)
{
    int data;
    if(isEmpty(q)){
        printf("Queue is Empty!!\n");
        return -1;
    }
    else{
        q->front=q->front+1;
        data=q->arr[q->front];
        return data;
    }
}
int main()
{
    struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
    q->size = 10;
    q->front = q->back = -1;
    q->arr = (int *)malloc(q->size * sizeof(int));
    // queue insertion Operation
    enqueue(q, 5);
    enqueue(q, 48);
    enqueue(q, 10);
    enqueue(q, 26);
    enqueue(q, 27);
    enqueue(q, 12);
    enqueue(q, 38);
    enqueue(q, 48);
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
    printf("Dequeue value is %d\n",dequeue(q));
    printf("Dequeue value is %d\n",dequeue(q));
    printf("Dequeue value is %d\n",dequeue(q));
    printf("Dequeue value is %d\n",dequeue(q));
    printf("Dequeue value is %d\n",dequeue(q));
    printf("Dequeue value is %d\n",dequeue(q));
    printf("Dequeue value is %d\n",dequeue(q));
    return 0;
}