#include <stdio.h>
void arrayTraversal(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void selectionSort(int *arr, int n)
{
    int indexOfMin, temp;
    for (int i = 0; i < n - 1; i++)
    {
        indexOfMin = i;  //let minimum index is the first element of the array 
        for (int j = i + 1; j < n; j++)
        {
            if (arr[indexOfMin] > arr[j])
            { // compare elements if any elements is bigger than indexOfMin
                indexOfMin = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[indexOfMin];
        arr[indexOfMin] = temp;
    }
}
int main()
{
    int arr[] = {2, 5, 1, 6, 3};
    int size = 5;
    printf("Unsorted array\n");
    arrayTraversal(arr, size);
    selectionSort(arr, size);
    printf("Sorted array\n");
    arrayTraversal(arr, size);
    return 0;
}