#include<stdio.h>
#include<string.h>
int is_palindrome(char s[]);
int main(){
    char s[1001];
    scanf("%s", s);
    int IsPalindrome = is_palindrome(s);
    if (IsPalindrome == 1)
    {
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }
    
    return 0;
}
int is_palindrome(char s[]){
    int len = strlen(s);
    int isPalindrome = 1;
    for (int i = 0, j = len - 1; i < j; i++, j--)
    {
            if (s[i] != s[j])
            {
                isPalindrome = 0;
            }
            
    }
    return isPalindrome;
    
}