#include<stdio.h>
int main(){
    int arr[5] = {12, 23, 34, 43, 53};
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[1]);
    printf("%p\n",&arr[2]);
    printf("%p\n",&arr[3]);
    printf("%p\n",&arr[4]);

    //every element in array take 4 byte space in memory because integer is 4 byte
    // every element's memory location is 4 byte higher than the previous one.
    // array's name is also a pointer if we print the memory location or the pointer of an array we will see that the array name location and the first element of the array location is both same.
    printf("%p\n",arr); // we are not using & because the name is a pointe already
    printf("%p\n", &arr[0]); // it will show the first element memory location
    printf("%d\n", *arr); // it will show the first element value
    printf("%d\n", arr[0]); // it will show the first element value
    return 0;
}