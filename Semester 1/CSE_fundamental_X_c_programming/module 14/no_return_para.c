#include<stdio.h>
void sum(int x, int y){ // no return so void
 
    int ans = x + y;
    printf("%d", ans);
    return; // but we can use return to end the function
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    sum(a, b);
    
    return 0;
}