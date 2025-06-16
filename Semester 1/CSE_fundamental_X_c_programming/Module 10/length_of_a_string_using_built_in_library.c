#include <stdio.h>
int main()
{
    char s[100 + 1];
    scanf("%s", &s); // take as input will not have any space
    
    int sz = strlen(s); // sometime you need to include the stirng.h header file

    printf("%d", sz);

    return 0;
}