#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    printf("%d years\n%d months\n%d days", n / 365, ( n % 365)/30, ( n % 365) % 30);
    return 0;
}