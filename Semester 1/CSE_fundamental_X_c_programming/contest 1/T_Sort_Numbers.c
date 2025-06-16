#include<stdio.h>
int main(){
    int a, b, c;
    int min, mid, max;
    scanf("%d %d %d", &a, &b, &c);
    if (a <= b && a <= c)
    {
        min = a;
    }else if (b <= a && b <= c)
    {
        min = b;
    } else{
        min = c;
    }
    //for getting the max
    if (a >= b && a >= c)
    {
        max = a;
    }else if (b >= a && b >= c)
    {
        max = b;
    } else{
        max = c;
    }
    
    if ((max == b || max == a) && (min == a || min == b))
    {
        mid = c;
    }else if ((min == c || min == b) && (max == c || max == b))
    {
        mid = a;
    }else{
        mid = b;
    }

    printf("%d\n%d\n%d\n",min, mid, max);
    printf("\n");
    printf("%d\n%d\n%d\n",a, b, c);
    
    
    
    return 0;
}