#include<stdio.h>
int odd_ev_chc(int n);
int main(){
    int a;
    scanf("%d", &a);
    int res = odd_ev_chc(a);
    printf("%s", res);
    return 0;
}

int odd_ev_chc(int n){
    if (n % 2 != 0)
    {
        return "odd";
    }else{
        return "even";
    }
    
}