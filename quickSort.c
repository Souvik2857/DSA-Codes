#include <stdio.h>
void arrayTraversal(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int partition(int *a, int low, int high)
{
    int pivot = a[low];
    int i = low + 1;
    int j = high;
    int temp;
    do
    {
        while (a[i] <= pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }

    } while (i < j);
    temp = a[low];
    a[low] = a[j];
    a[j] = temp;
    return j;
}
void quickSort(int *a, int low, int high)
{
    int partitionIndex; // index of pivot after partition
    if (low < high)
    {
        partitionIndex = partition(a, low, high);
        quickSort(a, low, partitionIndex - 1);  // sort left subarray
        quickSort(a, partitionIndex + 1, high); // sort right subarray
    }
}
int main()
{
    int a[] = {3,5,2,13,12,3,2,13,45};
    int n = 9;
    arrayTraversal(a, n);
    quickSort(a, 0, n - 1);
    arrayTraversal(a, n);

    return 0;
}