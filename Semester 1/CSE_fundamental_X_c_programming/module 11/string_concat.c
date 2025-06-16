#include <stdio.h>
#include <string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    int lnth_b = strlen(b);
    int lnth_a = strlen(a);

    for (int i = 0; i <= lnth_a; i++)
    {
        a[i + lnth_a] = b[i ];
    }

    printf("%s %s", a, b);

    return 0;
}