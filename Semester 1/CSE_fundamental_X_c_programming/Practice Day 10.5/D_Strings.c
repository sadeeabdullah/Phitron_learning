//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D

#include<stdio.h>
#include<string.h>
int main(){
    char a[11], b[11];
    scanf("%s\n%s",&a, &b);
    printf("%d %d\n", strlen(a), strlen(b));
    printf("%s%s\n", a, b);
    
    //swapping the first index of a, b string
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    
    printf("%s %s", a, b);
    return 0;
}