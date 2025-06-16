#include <stdio.h>
int main(){

    //printing the odd number from 1 - 100
    for (int i = 1; i < 100; i+=2)
    {
        printf("%d\n",i);
    }

    //printing the multiples of 4
    for (int i = 1; i <= 100; i++)
    {
        printf("%d\n",4*i);
    }

    for (int i = 100; i >=0; i--)
    {
        printf("%d\n",i);
    }
    
    
    
    return 0;
}