#include<stdio.h>

void display(int arr[],int n){
    //code for Traversal
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int indInsertion(int arr[],int size,int element,int capacity,int index){
    // code for Insertion 
    if (size>=capacity)
    {
        return -1;
    }
    else{

        for (int i = size-1; i >= index; i--)
        {
            arr[i+1]=arr[i];
        }
        arr[index]=element;
        return 1;
    }
}
int main(){
    int arr[100]={7,8,12,27,88};
    int size=5;
    int element=45;
    int index=3;
    int result=indInsertion(arr,size,element,100,index); 
    if (result==1)
    {
        printf("____________Insertion Completed____________\n");
        size+=1;
        display(arr,size);
    }
    else{
        printf("____________Insertion failed_______________");
    }
    return 0;
}