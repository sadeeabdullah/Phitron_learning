//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/P
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int star = n;
    //for loop for line printing 
    for (int i = 1; i <= n; i++)
    {
        //for loop for printing the star
        for (int j = star; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
        star--;
    }
    
    return 0;
}