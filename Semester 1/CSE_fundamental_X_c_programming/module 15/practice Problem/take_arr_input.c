#include<stdio.h>
int reverse(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *a + i);
        for (int j = n - 1; j >= 0; j--)
        {
            if (i)
            {
                /* code */
            }
            
        }
        
    }
    
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    reverse(arr, n);
    return 0;
}