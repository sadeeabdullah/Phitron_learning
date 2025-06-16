#include<stdio.h>
void get_sum(int arr[], int n, int *a){
    int sum = 0;
    for (int a = 0; a < n; a++)
    {
        sum += arr[a];
    }

    printf("%d", sum);
    
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    get_sum(arr,n,&arr);
    
    return 0;
}