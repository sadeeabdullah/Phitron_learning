// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S


#include <stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for (int tc = 1; tc <=T; tc++)
    {
        
    int sum = 0;
    int X, Y;
    scanf("%d %d", &X, &Y);
    if (X > Y)
    {
        int temp = Y;
        Y = X;
        X = temp;
    }
    for (int i = X + 1; i < Y; i++)
    {
        if (i % 2 != 0)
        {

            sum += i;
        }
    }
    

    printf("%d\n",sum);
    }
    

    return 0;
}
