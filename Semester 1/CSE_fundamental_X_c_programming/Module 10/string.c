#include<stdio.h>
int main(){
    char arr[5];
    for (int  i = 0; i < 5; i++)
    {
        scanf("%c ", &arr[i]);
    }
    for (int  i = 0; i < 5; i++)
    {
        printf("%c", arr[i]);  // you will get only  S A because space is also a character so make sure you put a space after the format specifier while taking input. or you can skip the space in the input.
    }
    
    return 0;
}