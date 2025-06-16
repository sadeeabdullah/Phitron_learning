#include<stdio.h>
int dbl_it(int n){
    return n*2;
}
int main(){
    int x = 10;
    int dbl = dbl_it(x);
    printf("%d", dbl);
    return 0;
}

