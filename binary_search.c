#include <stdio.h>

int lenearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}
int binarySearch(int arr[], int size, int element)
{
    int low = 0, high = size - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        else if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
// Lenear search for Unsorted Array
//  int arr[] = {2, 3, 54, 2, 56, 4, 6, 7, 4, 2, 3, 2, 5, 45, 34, 74, 82, 7};
//  int size = sizeof(arr) / sizeof(int);
//  int element = 82;
//  int searchIndex=lenearSearch(arr,size,element);
//  printf("The element %d is found at index %d",element,searchIndex);

{ // Binary search for sorted Array
    int arr[] = {2, 3, 54, 62, 76, 84, 126, 457, 624};
    int size = sizeof(arr) / sizeof(int);
    int element = 457;
    int searchIndex = binarySearch(arr, size, element);
    printf("The element %d is found at index %d", element, searchIndex);
    return 0;
}