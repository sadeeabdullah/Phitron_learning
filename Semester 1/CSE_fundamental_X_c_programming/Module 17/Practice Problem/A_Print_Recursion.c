#include<stdio.h>
void print_ilr(int n){
    if (n == 0)
    {
        return;
    }
    
    printf("I love Recursion\n");
    print_ilr(n - 1);
}
int main(){
    int n;
    scanf("%d", &n);
    print_ilr(n);
    return 0;
}