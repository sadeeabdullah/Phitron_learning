#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int tc = 0; tc < t; tc++)
    {
        int n;
        scanf("%d", &n);
        int a[n + 1];
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
        }

        int fnd = 0;
        for (int l = 1; l <= n && !fnd; l++)
        {
            for (int r = l; r <= n; r++)
            {
                long long int sum_Alice = 0;
                long long int sum_Bob = 0;
                for (int pos = l; pos <= r; pos++)
                {
                    if (((pos - l) % 2) == 0)
                    {
                        sum_Alice += a[pos];
                    }
                    else
                    {
                        sum_Bob += a[pos];
                    }
                }
                if (sum_Alice == sum_Bob)
                {
                    fnd = 1;
                    break;
                }
            }
        }

        if (fnd)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
