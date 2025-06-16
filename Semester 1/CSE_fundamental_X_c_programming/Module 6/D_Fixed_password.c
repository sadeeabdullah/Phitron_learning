//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D

#include<stdio.h>
int main(){
    int password;
    while (password != 1999)
    {
        scanf("%d",&password);
        if (password == 1999)
        {
            printf("Correct\n");
            break;
        }else{
            printf("Wrong\n");
        }
        
    }
    
    return 0;
}