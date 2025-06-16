#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    //taking input of the array element
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int left = 0,right = n - 1;

    for (; left <= right;)
    {
        if (left ==right)
        {
            printf("%d ", arr[left]);
        }else{

            printf("%d %d ", arr[left], arr[right]);
        }
        
        left++;
        right--;
    }
    
    
    return 0;
}