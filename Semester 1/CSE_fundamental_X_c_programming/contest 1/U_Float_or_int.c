#include<stdio.h>
int main(){
    float n;
    scanf("%f", &n);
    int int_n = n;
    float reminder = n - int_n;
    (reminder == 0)?printf("int %d",int_n):printf("float %d %.3f",int_n, reminder);
    return 0;
}