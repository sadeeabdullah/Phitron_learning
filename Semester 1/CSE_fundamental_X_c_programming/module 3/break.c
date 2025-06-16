#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i = 0; i <=n; i++)
    {
        /* break = break the loop if satisfy the condition */
        if(i == 5){
            break;
        }
        printf("%d",i);
    }
    
    return 0;
}