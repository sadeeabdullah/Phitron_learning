
//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n;
    //for loop for printing the line
    for (int i = 1; i <= n; i++)
    {
        //for printing space on the first top
        for(int j = space - 1; j >= 1; j--){
            printf(" ");
        }
        //for loop for printing the star on top
        for (int j = 1; j <= star;j++)
        {
            printf("*");
        }
        printf("\n");
        star += 2;
        space--;
    }
    star -= 2;
    for (int i = n; i >= 1; i--)
    {
        //for printing space on the first top
        for(int j = 0; j < space; j++){
            printf(" ");
        }
        //for loop for printing the star on top
        for (int j = star; j >= 1;j--)
        {
            printf("*");
        }
        printf("\n");
        star -= 2;
        space++;
    }
    
    return 0;
}