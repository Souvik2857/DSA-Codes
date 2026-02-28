#include <stdio.h>
void arrayTraversal(int arr[],int n)
{
    printf("Your Sorted array is\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
void bubbleSort(int arr[],int n)
{
    int temp, isSorted = 0;
    for (int i = 0; i < n-1; i++) // no of passes n-1
    {
        printf("No of passes %d\n", i + 1);
        isSorted = 1;
        for (int j = 0; j < n - i - 1; j++) // analyze all passes
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSorted = 0;
            }
        }
        // for making the bubble sort algorithm adaptive
        if (isSorted == 1) // if the array is already sorted then terminate the loop
        {
            printf("Array is already sorted\n");
            break;
        }
    }
}
int main()
{

    int arr[] = {1,2,5,6,12,54,625,7,23,9,987};
    int size=11;
    bubbleSort(arr,size);
    arrayTraversal(arr,size);
        return 0;
}