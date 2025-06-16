#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        if (n % 2 != 0)
        {
            printf("YES\n");
        }else{
            printf("NO\n");
        }
        
    }
    
    return 0;
}