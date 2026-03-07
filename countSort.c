#include <stdio.h>
#include<limits.h>
#include<stdlib.h>
void arrayTraversal(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int maximum(int *a,int n){
    int max=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(max<a[i]){
            max=a[i];
        }
    }
    return max;
}
void countSort(int *a,int n){
    int i,j;
    // find the maximum element in a
    int max=maximum(a,n);
    // create the Count array
    int * count=(int *)malloc((max+1)*sizeof(int));
    // initialize all the elements to 0
    for (i = 0; i < max+1; i++)
    {
        count[i]=0;
    }
    // Increment the index in the count array
    for (i = 0; i < n; i++)
    {
        count[a[i]]=count[a[i]]+1;
    }
    i=0; //Counter for count array
    j=0; //Counter for given array
    while (i<=max)
    {
        if(count[i]>0){
            a[j]=i;
            count[i]--;
            j++;
        }
        else
        {
            i++;
        }
        
    }
}
int main()
{
    int arr[] = {12, 54, 65, 7, 23, 9};
    int size = 6;
    arrayTraversal(arr, size);
    countSort(arr, size);
    arrayTraversal(arr, size);
    return 0;
}