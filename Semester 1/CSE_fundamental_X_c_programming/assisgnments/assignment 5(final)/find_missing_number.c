#include<stdio.h>
int main(){
    int t;
    int a,b,c;
    long long int m;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long long int missing_number;
        scanf("%lld %d %d %d", &m, &a, &b, &c);
        
        
        if (m % ((long long)a * b * c) == 0)
        {
            missing_number = m / ((long long)a * b * c);
        }else 
        {
            missing_number = -1;
        }
        
        printf("%lld\n",missing_number);
    }
    
    return 0;
}