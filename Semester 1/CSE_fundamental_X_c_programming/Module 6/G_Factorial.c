//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G

#include<stdio.h>
int main(){
    int tc;
    scanf("%d",&tc);
    for (int i = 1; i <= tc; i++)
    {
        
    int n;
    scanf("%d",&n);
    
    long long int factorial = n;
    if (n == 0)
    {
        factorial = 1;
    }

    for (int j = n-1; j >= 1; j--)
    {
        factorial = factorial * j;

    }
    printf("%lld\n",factorial);
    }
    

    
    return 0;
}