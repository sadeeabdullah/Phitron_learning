#include<stdio.h>
int main(){
    int a, b, c;
    int min, max;
    scanf("%d %d %d", &a, &b, &c);
    if (a >= c && a > b)
    {
        max = a;
    }else if (b >= c && b > a)
    {
        max = b;
    }else if (c >= a && c > b)
    {
        max = c;
    }

    if (a <= c && a < b)
    {
        min = a;
    }else if (b <= c && b < a)
    {
        min = b;
    }else if (c <= a && c < b)
    {
        min = c;
    }
    
    printf("%d %d",min, max);
    
    
    return 0;
}