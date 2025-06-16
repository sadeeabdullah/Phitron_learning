#include<stdio.h>
#include<limits.h>
int main(){
    int n, k, max;
    int min = INT_MIN;
    scanf("%d %d", &n, &k);
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        scanf("%d", &arr[i]);
        if (min < arr[i])
        {
            max = arr[i];
        }
        
    }
    printf("%d", max +)
    
    return 0;
}