//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J
#include<stdio.h>
int main(){
    int A, B;
    scanf("%d %d",&A, &B);
    if (A<B)
    {
        int temp = A;
        A = B;
        B = temp;
    }
    if (A % B == 0)
    {
        printf("Multiples");
    }else{
        printf("No Multiples");
    }
    
    
    return 0;
}