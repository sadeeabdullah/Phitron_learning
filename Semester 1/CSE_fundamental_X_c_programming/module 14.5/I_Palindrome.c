#include<stdio.h>
int main(){
    int n, len = 0;
    scanf("%d", &n);

    int original_digit = n;
    int reversed = 0;

    //for getting the digits of number
    for (int i = 0; n > 0; i++)
    {
        int digit = n % 10;
        
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    printf("%d", reversed);
    printf("\n");
    if (original_digit == reversed)
        printf("YES\n");
    else
        printf("NO\n");
   
    
    return 0;
}