#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d", &n);
    long long int  a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &a[i]);
    }
    long long new[n+1];
    new[1] = a[1];
    for(int i = 2; i <= n; i++){
        long long highest = LLONG_MAX;

        for (int jump = 1; jump <= i - 1; jump<<= 1 ){
            int p = i - jump;
            if (p >= 1 && new[p] < highest)
            {
                highest = new[p];
            }
            
        }
        new[i] = a[i] + highest;
        
    }
    printf("%lld",new[n]);
    return 0;
}