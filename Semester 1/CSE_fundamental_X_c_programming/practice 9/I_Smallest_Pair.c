// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I

#include <stdio.h>
#include <limits.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    for (int t = 1; t <= tc; t++)
    {
        int n,  smallest = INT_MAX, result;
        scanf("%d", &n);
        int arr[n + 1];

        // taking input of the value in the array
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &arr[i]);
        }

        for (int i = 1; i <= n - 1 ; i++)
        {
            for (int j =i + 1; j <= n ; j++)
            {
                
                result = arr[i ] + arr[j ] + j - i;
                if (result < smallest)
                {
                    smallest = result;
                }
                
            }
            
        }
        
        printf("%d\n",smallest);

    }

    return 0;
}