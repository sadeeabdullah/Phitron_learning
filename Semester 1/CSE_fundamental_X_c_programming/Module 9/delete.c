#include<stdio.h>
int main(){
    int n, idx;
    scanf("%d", &n);
    int arr[n];

    //taking input
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &idx);

    //replacing the index value
    for (int i = idx + 1 ; i < n ; i++)
    {
        arr[i - 1] = arr[i];
    }

    //showing the updated array
    // it is static array we can't change the array size
    for (int i = 0; i < n -1 ; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
    
    return 0;
}