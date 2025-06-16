#include <stdio.h>
int main()
{
    char s[100 + 1];
    scanf("%s", &s); // take as input will not have any space
    printf("%s\n", s);

    // let use for loop to get the length of string
    int count = 0;
    // for (int i = 0; i <= 100; i++)
    // {

    //     if (s[i] == '\0')
    //     {
    //         break;
    //     }
    //     count ++;

    // } or:
    for (int i = 0; s[i] != '\0'; i++)
    {

        count++;
    }

    printf("%d", count);

    return 0;
}