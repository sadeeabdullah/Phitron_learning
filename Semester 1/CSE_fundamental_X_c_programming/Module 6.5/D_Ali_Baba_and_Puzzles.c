//https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D

#include<stdio.h>
int main(){
    int a,b,c;
    long long int d;
    scanf("%lld %lld %lld %lld",&a, &b, &c, &d);
    if (a + b - c == d || a - b + c == d ||  a + (b * c) == d || (a * b) + c  == d || a - (b * c) == d || (a * b) - c == d)
    {
        printf("YES");
    }else{
        printf("NO");
    }
    
    return 0;
}