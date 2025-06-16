#include<stdio.h>
void rec(int n){
    if (n == 0)
    {
        return;
    }
    
    int digit = n % 10;
    rec(n/10);
    printf("%d ",digit);
}
int main(){
    int tc, n;
    scanf("%d", &tc);
    for (int i = 1; i <= tc; i++)
    {
        scanf("%d", &n);
        if (n == 0)
        {
            printf("0");
        }
        
        rec(n);
        printf("\n");
    }
    
    return 0;
}