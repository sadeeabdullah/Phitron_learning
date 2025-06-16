// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K

#include <stdio.h>
int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    char arr[n];
    scanf("%s", &arr);
    for (int i = 0; arr[i] != '\0'; i++)
    {
        int digit = arr[i] - '0';
        sum += digit;
    }

    printf("%d", sum);

    return 0;
}