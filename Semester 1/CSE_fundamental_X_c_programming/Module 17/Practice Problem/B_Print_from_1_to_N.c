#include<stdio.h>
void print1_n(int n, int i){
    if (i > n)
    {
        return;
    }
    printf("%d\n", i);
    print1_n(n, i + 1);
    
}
int main(){
    int n;
    scanf("%d", &n);
    print1_n(n, 1);
    return 0;
}