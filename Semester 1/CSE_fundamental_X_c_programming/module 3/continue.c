#include <stdio.h>
int main()
{
    for (int i = 0; i <= 10; i++)
    {
        /* continiue = skip the line under the continiue in the iteration if its satisfy the condition */
        if (i == 5)
        {
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}