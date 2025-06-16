#include<stdio.h>
void fun(int x){
    x = 20;
    printf("fun function er x er address: %p\n", &x);
}
int main(){
    int x = 45;
    fun(x);
    printf("main function er x er address: %p\n", &x);
    return 0;
}