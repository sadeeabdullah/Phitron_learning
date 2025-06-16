#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int k, m, n;
        scanf("%d %d %d", &k, &m, &n);
        //here k is the number of cows
        //here mk iss the number of liter per day milk production
        // n iss the number of day
        
        int day = n - (n/7);
        long long int result =(long long) k* day*m;
        printf("%lld\n", result);
    }
    
    return 0;
}