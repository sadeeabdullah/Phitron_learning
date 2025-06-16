#include<stdio.h>
#include<string.h>
int main(){
    char s[100001];
    scanf("%s",s);
    int cnsnt_count = 0;
    int len_s = strlen(s);
    for (int i = 0; i < len_s; i++)
    {
        if (s[i] != 'a' && s[i] != 'o' && s[i] != 'u' && s[i] != 'i' && s[i] != 'e' )
        {
            cnsnt_count++;
        }
        
    }
    printf("%d",cnsnt_count);
    
    return 0;
}