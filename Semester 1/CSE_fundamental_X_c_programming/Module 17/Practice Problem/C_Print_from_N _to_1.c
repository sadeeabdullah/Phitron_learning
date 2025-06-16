#include<stdio.h>
void print1_n(int n, int i){
    if (i > n)
    {
        return;
    }
    print1_n(n, i + 1);
    if (i == 1)
    {
        printf("%d", i);
    }else{    
        printf("%d ", i);
    }
    
    
}
int main(){
    int n;
    scanf("%d", &n);
    print1_n(n, 1);
    return 0;
}