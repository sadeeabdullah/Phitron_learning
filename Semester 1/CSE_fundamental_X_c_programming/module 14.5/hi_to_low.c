#include <stdio.h>
int cnvrt(char x);
int main()
{
    char ch;
    scanf("%c", &ch);

    cnvrt(ch);

    return 0;
}
int cnvrt(char x)
{
    if (x >= 'A' && x <= 'z')
    {
        printf("%c", x + 32);
        return;
    }
    printf("you only can print the lower case of A to Z");
    
    
}