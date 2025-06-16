#include<stdio.h>
int main(){
    long long int x,y, sum, sub, mul;
    scanf("%lld %lld", &x, &y);
    sum = x + y;
    mul = x * y;
    sub = x - y;
    printf("%lld + %lld = %lld\n",x, y, sum);
    printf("%lld * %lld = %lld\n",x, y, mul);
    printf("%lld - %lld = %lld\n",x, y, sub);
return 0;
}