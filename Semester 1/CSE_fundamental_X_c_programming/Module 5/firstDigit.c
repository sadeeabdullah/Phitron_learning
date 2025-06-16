//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P

#include<stdio.h>
int main(){
    int X;
    scanf("%d",&X);

    while (X >= 10)
    {
        X = X/10;
    }
    if (X % 2 == 0)
    {
        printf("EVEN");
    }else{
        printf("ODD");
    }
    
    return 0;
}