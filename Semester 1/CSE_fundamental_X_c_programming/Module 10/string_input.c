#include <stdio.h>
int main()
{
    char a[10];
    scanf("%s", &a);
    printf("%s", a);
    printf("%c\n", a[6]);
    // string put a null character at the after index of the last character of string that is how string get to know how much it need to print
    //\0 is null.
    // it set the null value only after the last index
    // you should keep 1 extra space in array while storing a string.
    // in windows it automatically allocate extra space but in online compiler or linux or other OS it will not work. giving and example below

    char str[5];
    scanf("%s", &a);
    printf("%s", a); // it is working in windows but will not work in another OS explained on the first explaination

    // %s can't take input with spcae

    return 0;
}
