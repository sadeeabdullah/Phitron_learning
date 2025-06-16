//http://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M

#include<stdio.h>
#include<limits.h>
int main(){
    int n, min = INT_MAX, min_idx, max_idx,  max = INT_MIN;
    scanf("%d",&n);
    int arr[n];

    //taking input of the value in the array
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            min_idx = i;
        }
        if (arr[i] > max)
        {
            max = arr[i];
            max_idx = i;
        }
        
        
    }
    

    //swapping the min and max value
    int temp = arr[min_idx];
    arr[min_idx] = arr[max_idx];
    arr[max_idx] = temp;
    
    //showing the updated array
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}