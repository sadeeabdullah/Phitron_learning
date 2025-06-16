//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E

#include<stdio.h>
#include<limits.h>
int main(){ 
    // we need to set the max value to INT_MIN when we are finding the maximum value of any negative or positive value group.
    int nValue, n,max = INT_MIN;
    scanf("%d",&nValue);
    for (int i = 1; i <= nValue; i++)
    {
        scanf("%d",&n);
        if (max<=n)
        {
            max = n;
        }
        
    }
    printf("%d",max);
    
    return 0;
}