#include <stdio.h>
#include <math.h>
int main()
{
    int t, n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        int a[n], b[n], c[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }
        for (int j = 0, l = n - 1; j < n && l >= 0; j++, l--)
        {
            b[j] = a[l];
        }
        // ascending order sorting or b array
        for (int j = 0; j < n - 1; j++)
        {
            for (int l = j + 1; l < n; l++)
            {
                if (b[j] > b[l])
                {
                    int temp = b[j];
                    b[j] = b[l];
                    b[l] = temp;
                }
            }
        }

        // output of the absolute difference of these array

        for (int j = 0; j < n; j++)
        {
            c[j] = abs(a[j] - b[j]);
            printf("%d ", c[j]);
        }
        printf("\n");
    }

    return 0;
}