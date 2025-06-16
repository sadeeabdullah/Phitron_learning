#include <stdio.h>

int gcd(int a, int b)
{
    while (b != 0)
    {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int max(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    int t;
    scanf("%d", &t);

    for (int tc = 0; tc < t; tc++)
    {
        int n;
        scanf("%d", &n);

        int a[n + 1];
        int last_index[1001] = {0};

        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
            last_index[a[i]] = i;
        }
        int ans = -1;

        for (int i = 1; i <= 1000; i++)
        {
            if (last_index[i] == 0)
                continue;
            for (int j = 1; j <= 1000; j++)
            {
                if (last_index[j] == 0)
                    continue;
                if (gcd(i, j) == 1)
                {
                    ans = max(ans, last_index[i] + last_index[j]);
                }
            }
        }

        printf("%d\n", ans);
    }

    return 0;
}
