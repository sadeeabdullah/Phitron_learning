//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D

#include<stdio.h>
int main(){
    int n, arr_value;
    scanf("%d",&n);
    int arr[n];

    //taking input of the arr_value
    for (int i = 0; i < n; i++)
    {

        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= 10)
        {
            printf("A[%d] = %d\n",i,arr[i]);
        }
        
    }
    
    return 0;
}