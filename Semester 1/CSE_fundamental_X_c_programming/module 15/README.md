# Pointers in C

This repository contains notes and examples on pointers in C programming.

## What is a Pointer?

A pointer is a variable that stores the memory location of another variable.

### Declaration:
```c
data_type *pointer_name;

Key Concepts:

    Dereference: Convert address to value (using *)

    Reference: Convert value to address (using &)

Passing Values vs References to Functions
Passing by Value (Default)
c

#include<stdio.h>
void fun(int x){
    x = 20;
    printf("fun function x address: %p\n", &x);
}
int main(){
    int x = 45;
    fun(x);
    printf("main function x address: %p\n", &x);
    return 0;
}

Passing by Reference
c

#include<stdio.h>
void fun(int* x){
    *x = 20;
}
int main(){
    int x = 45;
    fun(&x);
    printf("%d", x);
    return 0;
}

Input/Output with Pointers

    We use & (reference) while taking input because we need to pass the memory location to scanf

    We don't need & with printf because we're just displaying the value

c

int x;
scanf("%d", &x);  // Need & to pass memory location
printf("%d", x);  // Don't need & for output

Arrays and Pointers

Arrays are closely related to pointers:

    Array name is a pointer to the first element

    Array elements are stored in contiguous memory locations

c

int arr[5] = {12, 23, 34, 43, 53};
printf("%p\n", &arr[0]);  // Address of first element
printf("%p\n", arr);      // Same as above (array name is pointer)
printf("%d\n", *arr);     // Value of first element
printf("%d\n", arr[0]);   // Same as above

Important Notes:

    Each element in an integer array takes 4 bytes of memory

    Memory locations are consecutive (each 4 bytes higher than previous)

    Array name is a pointer to the first element

Function Behavior

    Passing Arrays to Functions: By default, arrays are passed by reference

c

void fun2(int arr[]){
    arr[3] = 400;  // Modifies original array
}

    Function Scope: After execution, local variables are deleted if not returned

    Returning Arrays: You can't directly return an entire array from a function. If you try, you'll only get the first element's value.

Example Combining Concepts
c

#include<stdio.h>
void fun(int* x){
    *x = 20;
}
void fun2(int arr[]){
    arr[3] = 400;
}
int main(){
    int arr[5] = {12, 32, 42, 44, 43};
    int x = 534;
    fun(&x);
    fun2(arr);
    printf("%d\n", x);
    for(int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}

License

This project is open source. Feel free to use these notes for learning purposes.



