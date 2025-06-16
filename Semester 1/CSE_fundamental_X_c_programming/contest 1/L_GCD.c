#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int gcd;
    
    int min = a < b ? a : b;

    for (int i = 1; i <= min; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
        
    }
    
    printf("%d", gcd);
    
    return 0;
}