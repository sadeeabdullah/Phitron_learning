#include <stdio.h>
int main(){
    int tk;
    scanf("%d",&tk);
    if (tk>5000)
    {
        printf("we head to coxsbazar\n");
        if (tk>10000)
        {
            printf("we will head to saint martin\n");
        }
        else{
            printf("we will head back to home");
        }
        
    }
    else{
        printf("we will not go anywhere");
    }
    
    return 0;
}