#include<stdio.h>

void func1(int n){
    int sum = 0;
    int product=1;
    for (int i = 0; i < n; i++)
    {    
        for (int j = 0; j < n; j++)
        {
          printf("%d %d",i,j);
        }
    }
}
int main(){
    int n=5;
    func1(n);
    return 0;
}