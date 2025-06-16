#include<stdio.h>
#include<string.h>
int main(){
    char s[100],f[100];
    char s2[100],f2[100];
    scanf("%s %s",&s, &f);
    scanf("%s %s",&s2, &f2);
    if (strcmp(f, f2) == 0)
    {
        printf("ARE Brothers");
    }else
    printf("NOT");
    
    return 0;
}