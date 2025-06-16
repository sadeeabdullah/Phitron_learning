// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E

#include <stdio.h>
#include<limits.h>
int main()
{
    int n, arr_value, lowest_value = INT_MAX, lowest_value_index;
    scanf("%d", &n);
    int arr[n];

    // taking input of the arr_value
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (lowest_value > arr[i])
        {
            lowest_value = arr[i];
            lowest_value_index = i + 1;
        }
        
    }
    printf("%d %d",lowest_value,lowest_value_index);
    

    return 0;
}