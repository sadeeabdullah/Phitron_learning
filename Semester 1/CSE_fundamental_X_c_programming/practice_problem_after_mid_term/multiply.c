#include<stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    long long int total = (long long int)a * b;
    printf("%lld", total);
    return 0;
}