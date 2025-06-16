//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J

#include<stdio.h>
#include<string.h>
int main(){ 
    char s[10000007];
    scanf("%s", &s);
    int freq[26] = {0};
    int len= strlen(s);
    for (int i = 0; s[i] != '\0'; i++)
    {
       
        int idx = s[i] - 97;
        freq[idx] ++;
       
        
    }
    for (int i = 0; i <26; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c : %d\n",i + 97,freq[i]);
        }
        
        
    }
    
    
    return 0;
}