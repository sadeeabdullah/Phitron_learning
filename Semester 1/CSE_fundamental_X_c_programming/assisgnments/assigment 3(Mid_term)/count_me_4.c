#include<stdio.h>
#include<string.h>
int main(){
    char s[10001];
    scanf("%s", s);
    int len_s = strlen(s);
    int freq[26] = {0};
    int i;
    for ( i = 0; i < len_s; i++)
    {
        int idx = s[i] - 'a';
        freq[idx]++;
    }
    for ( i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c - %d\n", i + 'a', freq[i]);
        }
        
    }
    
    
    return 0;
}