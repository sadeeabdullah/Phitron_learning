#include<stdio.h>
void fun(int* x){ //passing the refference.
    *x = 20;
    printf("fun function er x er address: %p\n", &x);
}
int main(){
    int x = 45;
    fun(&x);
    // printf("%d", x);
    printf("main function er x er address: %p\n", &x);
    return 0;
}