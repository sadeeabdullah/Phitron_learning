#include<stdio.h>
int main(){
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    long long int x = (a * b) - (c * d);
    printf("Difference = %lld",x);
    return 0;
}