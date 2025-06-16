#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int star = n + (n - 1);
    int space = 0;
    //printing the line using for loop
    for (int i = 1; i <= n; i++)
    {
        //printing space
        for (int j = 0; j < space;j++)
        {
            printf(" ");
        }
        
        //printing the star using for loop
        for(int j = star; j >= 1; j--){
            printf("*");
        }
        printf("\n");
        star -= 2;
        space++;
    }
    
    return 0;
}