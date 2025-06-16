#include <stdio.h>
void rec(int n)
{
    if (n < 1)
    {
        return;
    }
    rec(n / 2);
    int binary = n % 2;
    printf("%d", binary);
    
}
int main()
{
    int t, n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        if (n == 0)
        {
            printf("0");
        }else
        
        rec(n);
        printf("\n");
    }

    return 0;
}