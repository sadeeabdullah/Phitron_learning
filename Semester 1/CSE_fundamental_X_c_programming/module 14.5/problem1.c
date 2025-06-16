#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n;
    //printing line using for loop
    for (int i = 1; i <= n; i++)
    {
        //printing space 
        for (int j = space - 1; j >= 1;j--)
        {
            printf(" ");
        }
        
        //printing star
        for (int j = 1; j <= star;j++)
        {
            printf("*");
        }
        printf("\n");
        star++;
        space--;
        
    }
    
    return 0;
}