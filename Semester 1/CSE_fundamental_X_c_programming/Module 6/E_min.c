#include<stdio.h>
#include<limits.h>
int main(){
    int nValue,n,min = INT_MAX;
    scanf("%d\n",&nValue);
    for (int i = 1; i <= nValue; i++)
    {
        scanf("%d",&n);
        if (n<min)
        {
            min = n;
        }
        
    }
    printf("%d",min);

    
    return 0;
}