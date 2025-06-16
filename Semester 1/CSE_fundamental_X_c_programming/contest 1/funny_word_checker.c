#include<stdio.h>
#include<string.h>
int main(){
    char s[101];
    scanf("%s", &s);
    char c[101];
    strcpy(c,s);
    int length_s = strlen(s);
    
    char temp = s[0];
    s[0] = s[length_s - 1];
    s[length_s - 1] = temp;

    if (strcmp (s, c) == 0)
    {
        printf("Yes");
    }else{
        printf("No");
    }
    
    
    return 0;
}