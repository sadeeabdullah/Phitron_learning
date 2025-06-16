// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S

#include <stdio.h>
int main()
{
    int tc;
    scanf("%d",&tc);
    for (int i = 1; i <= tc; i++)
    {

    int initial, end, total = 0;;
    scanf("%d %d", &initial, &end);
    if (initial > end)
    {
        int temp = initial;
        initial = end;
        end = temp;
    }
    

    for (int i = initial + 1; i < end; i++)
    {
        if (i % 2 != 0)
        {
            total += i;
        }
        
    }
    printf("%d\n",total);
    }

    return 0;
}