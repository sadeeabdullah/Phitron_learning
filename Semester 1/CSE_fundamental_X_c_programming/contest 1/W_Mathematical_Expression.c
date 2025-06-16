#include<stdio.h>
int main(){
    int a, b, r;
    char s;
    scanf("%d %c %d = %d",&a, &s, &b, &r);
    if (s == '+')
    {
        if (a + b == r)
        {
            printf("Yes");
        }else{
            printf("%d", a + b);
        }
        
    }else if (s == '-')
    {
        if (a - b == r)
        {
            printf("Yes");
        }else{
            printf("%d", a - b);
        }
    }else if (s == '*')
    {
        if (a * b == r)
        {
            printf("Yes");
        }else{
            printf("%d", a * b);
        }
    }
    
    
    
    return 0;
}