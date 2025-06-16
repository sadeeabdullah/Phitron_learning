#include<stdio.h>
void vello(){
    printf("vello\n");
}
void gello(){
    printf("gello\n");
    vello();
}
void hello(){
    printf("hello\n");
    gello();
}
int main(){
    printf("hi\n");
    hello();
    return 0;
}