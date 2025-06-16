#include <stdio.h>
#include <string.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    for (int i = 0; i <= tc; i++)
    {
        char str[1000];
        fgets(str, 1000, stdin);
        printf("%c", str[0]);
        for (int i = 0; str[i] != '\0'; i++)
        {

            if (str[i] == ' ')
            {
                printf("%c", str[i + 1]);
            }
        }
        printf("\n");
    }

    return 0;
}