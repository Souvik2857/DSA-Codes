#include<stdio.h>

void display(int arr[],int n){
    //code for Traversal
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int indDeletion(int arr[],int size,int index){
    // code for Deletion 
    if (index>=size)
    {
        return -1;
    }
    else{

        for (int i = index; i <= size-1; i++)
        {
            arr[i]=arr[i+1];
        }
    
        return 1;
    }
}
int main(){
    int arr[100]={7,8,12,27,88};
    int size=5;
    int element=45;
    int index=4;
    int result=indDeletion(arr,size,index); 
    if (result==1)
    {
        printf("___________Deletion Completed____________\n");
        size-=1;
        display(arr,size);
    }
    else{
        printf("___________Deletion failed_______________");
    }
    return 0;
}