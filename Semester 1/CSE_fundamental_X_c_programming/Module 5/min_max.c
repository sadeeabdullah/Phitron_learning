//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K

#include<stdio.h>
int main(){
    int A, B, C;
    scanf("%d %d %d",&A, &B, &C);
    int max, min;
    if (A > B && A > C)
    {
        max = A;
    }else if (A < B && B > C)
    {
        max = B;
    }else if (C > A && C >B)
    {
        max = C;
    }
    if (A < B && A < C)
    {
        min = A;
    }else if (A > B && B < C)
    {
        min = B;
    }else if (C < A && C < B)
    {
        min = C;
    }
    
    
    printf("%d %d",min, max);
    return 0;
}