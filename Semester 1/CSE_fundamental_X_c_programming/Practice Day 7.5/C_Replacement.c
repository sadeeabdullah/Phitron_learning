//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C
#include<stdio.h>
int main(){
    int n,arr_value;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr_value);
        if (arr_value == 0)
        {
            arr_value = 0;
        }else if (arr_value < 0)
        {
            arr_value = 2;
        }else{
            arr_value = 1;
        }
        arr[i] = arr_value;
    }
    for (int i = 0; i < n; i++)
    {
        
        
        printf("%d ",arr[i]);
    }

    
    
    return 0;
}