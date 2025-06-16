#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) //taking the element input
    {
        scanf("%d", &arr[i]);
    }
    int x;
    scanf("%d", &x);
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                printf("Yes");
                return 0;
            }
            
        }
        
    }
    printf("No");
    
    
    return 0;
}