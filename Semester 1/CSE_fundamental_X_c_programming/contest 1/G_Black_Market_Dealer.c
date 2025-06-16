#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int total = 0;
    int n, k, tmp;
    scanf("%d %d", &n, &k);
    int arr[n];
    int lav[k];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int brr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &brr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        lav[i] = brr[i] - arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++){
            if (lav[i] < lav[j])
            {
                tmp = lav[i];
                lav[i] = lav[j];
                lav[j] = tmp;
            }
            
        }
    }
    

    for (int i = 0; i < k; i++)
    {
        total += lav[i];
    }

    printf("%lld", total);

    return 0;
}