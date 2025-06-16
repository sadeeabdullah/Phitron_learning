#include<stdio.h>
int main(){
    int n; 
    scanf("%d", &n);
    int star = 1;
    int sp = n - 1;
    for (int i = 1; i <= n; i++) // for printing line
    {
        for (int j = 1; j <= sp; j++)//printing space
        {
            printf(" ");
        }
        
        for (int j = 1; j <= star; j++ )
        {
            printf("*");
        }
        printf("\n");
        star += 2;
        sp--;
    }
    
    return 0;
}