#include<stdio.h>
int count_before_one(int arr[], int n);
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) //taking input of the array element
    {
        scanf("%d", &arr[i]);
    }
    int sum = count_before_one(arr,n);
    printf("%d",sum);
    return 0;
}

int count_before_one(int arr[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            break; 
        }
        sum ++; 

    }
    return sum;
}