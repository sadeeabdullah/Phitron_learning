//https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I

#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    
    int first_digit = (N / 10)%10;
    int second_digit = N % 10;

    if (second_digit % first_digit == 0 || first_digit % second_digit == 0)
    {
        printf("YES");
    }else{
        printf("NO");
    }
    
    return 0;
}