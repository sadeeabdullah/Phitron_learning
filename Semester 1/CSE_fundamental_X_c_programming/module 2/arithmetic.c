#include <stdio.h>
int main(){
    int a,b,sum,subs,mul,div;
    a = 5;
    b = 7;
    sum= a + b;
    subs = a - b;
    mul  = a * b;
    div = a/b;
    printf("%d \n",sum);
    printf("%d \n",subs);
    printf("%d \n",mul);
    // printf("%d",div);
  
    //we need to keep one variable in float to get the float value of any operation
    
    int y;
    float x=5;
    y= 2;
    float division = x/y;
    printf("%.2f",division);
    return 0;
}