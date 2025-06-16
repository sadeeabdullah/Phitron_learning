#include<stdio.h>
int main(){
    int n;
    scanf("%d" ,&n);

    int number = 1;
    int space = n;

    //for loop for printing line
    for (int  i = 1; i <= n; i++)
    {

        //for loop for adding space
        for (int  j = space - 1; j >= 0; j--)
        {
            printf(" ");
        }
        
        //for loop for printing number
        for (int j = 1; j <= number; j++)
        {
            printf("%d" , j);
        }
        printf("\n");
        number += 2;
        space --;
        
    }
    
    return 0;
}