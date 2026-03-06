#include <stdio.h>
void arrayTraversal(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void merge(int a[], int low, int mid, int high)
{
    int i, j, k, b[100];
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            b[k]=a[i];
            i++;
            k++;
        }
        else if (a[j]<a[i])
        {
            b[k]=a[j];
            j++;
            k++;
        }
        else{
            b[k]=a[i];
            i++,k++;
        }
        
    }
    while (i<=mid)
    {
        b[k]=a[i];
        i++;
        k++;
    }
    while (j<=high)
    {
        b[k]=a[j];
        j++,k++;
    }
    for (int i = 0; i < high; i++)
    {
        a[i]=b[i];
    }
    
}
void mergeSort(int a[],int low,int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        mergeSort(a,low,mid);
        mergeSort(a,mid+1,high);
        merge(a,low,mid,high);
    }

}
int main()
{
    int a[] = {3, 5, 2, 13, 12, 3, 2, 13, 45};
    int n = 9;
    int low=0;
    int high=n-1;
    arrayTraversal(a, n);
    mergeSort(a,low,high);
    arrayTraversal(a, n);

    return 0;
}