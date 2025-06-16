//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/A

#include<stdio.h>
#include<string.h>
int main(){
    char s[1001], t[1001];
    scanf("%s\n %s",&s, &t);
    int s_length = strlen(s);
    int t_length = strlen(t);
    printf("%d %d\n",s_length, t_length);
    printf("%s %s", s, t);
    return 0;
}