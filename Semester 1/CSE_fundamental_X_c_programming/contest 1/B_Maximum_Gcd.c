#include <stdio.h>

#define MAX 1000001

int freq[MAX];
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        freq[x]++;
    }

    for (int g = MAX - 1; g >= 1; g--)
    {
        int count = 0;
        for (int multiple = g; multiple < MAX; multiple += g)
        {
            count += freq[multiple];
        }
        if (count >= k)
        {
            printf("%d\n", g);
            return 0;
        }
    }

    return 0;
}
