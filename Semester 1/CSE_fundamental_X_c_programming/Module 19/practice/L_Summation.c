#include<stdio.h>
long long int summation(int arr[], int n, int i){
    if (i == n - 1)
    {
        return arr[i];
    }
    long long int adding = summation(arr,n,i+1);
    return adding + arr[i];
    
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    long long int sum = summation(arr, n,  0);
    printf("%lld", sum);
    return 0;
}