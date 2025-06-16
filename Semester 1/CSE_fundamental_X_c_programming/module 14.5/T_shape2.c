//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/T
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n;

    //for loop for printing the line
    for (int i = 1; i <= n; i++)
    {
        //for loop for printing space
        for (int j = 1;j < space;j++)
        {
            printf(" ");
        }
        
        // for loop for printing star
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        printf("\n");
        star += 2;    
        space--;    
    }
    
    return 0;
}