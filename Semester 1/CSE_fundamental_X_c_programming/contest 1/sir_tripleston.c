#include<stdio.h>
#include<string.h>
int main(){
    char s[78];
    scanf("%s", &s);
    int len_s = strlen(s);
    int freq[26] = {0};
    for (int i = 0; i < len_s ; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z') {
            freq[s[i] - 'a']++; 
        }
        
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] < 3)
        {
            printf("%c", i + 97);
        }
    }
    
    
    return 0;
}