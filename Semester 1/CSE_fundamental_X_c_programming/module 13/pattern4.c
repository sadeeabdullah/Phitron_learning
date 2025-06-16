#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int star = n ;
    int space = 0;
    for (int i = 1; i <= n; i++) //for printing  the line
    {
        for (int j = space; j>= 1; j--) // for printing the space
        {
            printf(" ");
        }
        
        for (int  j = star; j >= 1; j--) // for printing the star
        {
            printf("*");
        }
        printf("\n");
        star -= 1;
        space++;
    }
    
    return 0;
}