#include<stdio.h>
int main(){
    int x;
    long long int p;
    scanf("%d %lld", &x, &p);
    float l = (100.0 * p)/(100 - x);
    printf("%.2f", l);
    return 0;
}