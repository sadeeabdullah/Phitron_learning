#include<stdio.h>
void summation(int arr[], int n){
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("%lld", sum);
    
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    //taking input for the  array element
    for (int i = 0; i < n; i++)
    {
         scanf("%d", &arr[i]);
    }
    summation(arr,n);
    
    return 0;
}