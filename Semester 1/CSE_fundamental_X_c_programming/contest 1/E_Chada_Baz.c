#include<stdio.h>
int main(){
    int n;
    int total_of_tom = 0;
    int total_of_jerry = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            total_of_tom += arr[i];
        }else{
            total_of_jerry += arr[i];
        }
        
    }

   // printf("%d %d", total_of_jerry,total_of_tom)

    if (total_of_tom >total_of_jerry)
    {
        printf("YES");
    }else{
        printf("NO");
    }
    
    
    
    return 0;
}