#include<stdio.h>
int main(){
    
    // int counter;

    // for ( counter = 1; counter <= 5; counter++)
    // {
    //     printf("%d\n", counter);
    // }
    
    // printf("%d\n", counter);

    // int i ;
    // for (i = 5; i >= 1; i--)
    // {
    //     printf("%d\n", i);
    // }
    // printf("%d\n", i);

    int n;
    scanf("%d", &n);

    while (n != 0)
    {
        printf("%d\n",n);
        n /= 2;
    }
    printf("%d\n",n);

    
    

    return 0;
}