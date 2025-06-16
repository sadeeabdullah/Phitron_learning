//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G

#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);

        for (int tc = 1; tc <= T; tc++)
    {
        int N;
        scanf("%d", &N);
        long long int factorial = 1;
        for (int i = 1; i <= N; i++)
        {
            factorial = factorial * i;
        }
        printf("%lld\n", factorial);
    }

    return 0;
}