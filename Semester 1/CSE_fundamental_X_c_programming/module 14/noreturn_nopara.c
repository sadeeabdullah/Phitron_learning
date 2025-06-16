#include<stdio.h>
void sum(){ // no return so void
 
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = a + b;
    printf("%d", ans);
    return; // but we can use return to end the function
}
int main(){
    sum();
    
    return 0;
}