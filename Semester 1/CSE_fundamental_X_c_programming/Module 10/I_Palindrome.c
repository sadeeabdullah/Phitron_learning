//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I

#include<stdio.h>
#include<string.h>
int main(){
    char s[1001];
    scanf("%s", &s);
    for (int i = 0, j= strlen(s) - 1; i < j; i++,j--)
    {
        if (s[i] != s[j])
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    
    return 0;
}