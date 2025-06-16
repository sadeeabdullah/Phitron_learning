// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/K

#include <stdio.h>
#include <string.h>
int main()
{

    int tc;
    scanf("%d", &tc);
    for (int i = 0; i < tc; i++)
    {
        char s[51], t[51];
        scanf("%s %s", &s, &t);
        int len_s = strlen(s);
        int len_t = strlen(t);

        int i = 0, j = 0;

        //common print
        while (i < len_s && j < len_t)
        {
            printf("%c%c", s[i], t[j]);
            i++;
            j++;
        }

        // extra form of t
        while (j < len_t)
        {
            printf("%c", t[j]);
            j++;
        }

        // extra form of s
        while (i < len_s)
        {
            printf("%c", s[i]);
            i++;
        }
        printf("\n");
    }

    return 0;
}