#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("the number %d is even\n", i);
        }
        else{
            printf("the number %d is odd\n", i);
        }
    }

    return 0;
}