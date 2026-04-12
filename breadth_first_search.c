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
    q->size=400;
    q->front=q->back=0;
    q->arr=(int *)malloc(q->size*sizeof(int));

    // BFS Implementation
    int node;
    int i=0;
    int visited[7]={0,0,0,0,0,0,0};
    int a[7][7]={
        {0,1,1,1,0,0,0},
        {1,0,1,0,0,0,0},
        {1,1,0,1,1,0,0},
        {1,0,1,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0},
        {0,0,0,0,1,0,0},
    };
    printf("%d",i);
    visited[i]=1;
    enqueue(q,i); //enque i for exploration
    while (!isEmpty(q))
    {
       int node=dequeue(q);
       for (int j = 0; j < 7; j++)
       {
        if(a[node][j]==1 && visited[j]==0){
            printf("%d",j);
            visited[j]=1;
            enqueue(q,j);
        }
       }
       
    }
    
    return 0;
}