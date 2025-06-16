#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int last_digit;
    last_digit = num % 10;
    
    printf("%d",last_digit);
    
    return 0;
}