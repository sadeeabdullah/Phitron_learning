#include<stdio.h>
int main(){
    int x = 10;
    int* ptr; 
    // reffernce
    ptr = &x;
    printf("%p\n",&x);
    printf("%p\n",x);
    //dereffernce
    printf("%d\n", *ptr);
    //dereffernce
    *ptr = 200;
    printf("%d", *ptr);
    return 0;
}