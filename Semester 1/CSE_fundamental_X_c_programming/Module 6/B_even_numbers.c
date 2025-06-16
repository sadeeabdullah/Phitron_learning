// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B

#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    if (N < 2)
    {
        printf("-1");
    }
    
    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}