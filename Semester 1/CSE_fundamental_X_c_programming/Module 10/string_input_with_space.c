#include<stdio.h>
int main(){
    char s[50];
    // scanf("%s", &s);// we will not use this while taking input of space
    fgets(s,10,stdin); // have to follow the syntax and sometime it won't work without including the string.h file
    printf("%s",s);
    return 0;
}

//fgets(arr_name,number_of_element,stdin)
// if there is a input "enter" fgets will take the input and stop there

// we wiill use fgets when we have space in the input
//fgets always keep 1 location for \0 (null)

//if we don't have space in the input then we will  use scanf