// find the complexity of the func1 function in the program show below
#include<stdio.h>
void func1(int arr[],int length){
    int sum = 0;
    int product=1;
    for (int i = 0; i < length; i++)
    {
        sum+=arr[i];

    }
    printf("The sum of all number in array is %d\n",sum);
    for (int i = 0; i < length; i++)
    {
        product*=arr[i];
    }
    printf("The product of all number in array is %d",product);
    

}
int main(){
    int arr[]={2,34,5,3};
    func1(arr,4);
    return 0;
}