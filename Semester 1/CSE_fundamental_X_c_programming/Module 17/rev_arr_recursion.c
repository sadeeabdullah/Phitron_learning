#include<stdio.h>
void print_rev_arr(int arr[], int n, int i){
    int idx = i;
    if (idx == n) //base case
    {
        return;
    }
    
    print_rev_arr(arr, n, i + 1);
    printf("%d ", arr[idx]);
}
int main(){
    int i = 0, n;
    scanf("%d", &n);
    int arr[n];
    //taking input 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    print_rev_arr(arr, n, i);
    
    return 0;
}