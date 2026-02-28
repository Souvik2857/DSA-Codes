#include <stdio.h>
void arrayTraversal(int arr[],int n)
{
    printf("Your Sorted array is\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
void insertionSort(int *arr,int n){
    int key,j;
    // loop for passes
    for (int i = 1; i <= n-1; i++)
    {
        key=arr[i];
        j=i-1;
        // loop for each pass
        while (j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;   
        }
        arr[j+1]=key;
    }
    

}
int main()
{
    int arr[] = {12,54,65,7,23,9};
    int size = 6;
    insertionSort(arr, size);
    arrayTraversal(arr, size);
    return 0;
}