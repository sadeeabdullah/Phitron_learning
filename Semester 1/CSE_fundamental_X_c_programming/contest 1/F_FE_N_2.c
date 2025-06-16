#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int tc = 0; tc < t; tc++)
    {
        int n;
         long long int d, x, y;
        scanf("%d %lld %lld %lld", &n, &d, &x, &y);

         long long int d_squared = d * d;
        int left[n];
        int count = 0;

        for (int i = 0; i < n; i++)
        {
             long long int xi, yi;
            scanf("%lld %lld", &xi, &yi);

             long long int dx = xi - x;
             long long int dy = yi - y;
             long long int dist_sq = dx * dx + dy * dy;

            if (dist_sq > d_squared)
            {
                left[count++] = i + 1;
            }
        }

        if (count == 0)
        {
            printf("FE!N\n");
        }
        else
        {
            printf("%d\n", count);
            for (int i = 0; i < count; i++)
            {
                printf("%d ", left[i]);
            }
            printf("\n");
        }
    }

    return 0;
}
