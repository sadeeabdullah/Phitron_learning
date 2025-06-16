#include <stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d", &t);
    for(int tc = 0; tc < t; tc++){ // using for loop for test case
        //to be a palindrome string every character have to be twice or 1 single character and rest character have to be double
        char s[1001];
        scanf("%s", s);

        // odd count
        int odd = 0;

        // using frequency array to store the repeatation or count the character 
        int freq[26] = {0};

        // storing the count of character in the freq array

        for (int i = 0; s[i] != '\0'; i++)
        {
            // if (i == (s[i] - 'a'))
            // {
            //     freq[i]++;
            // }
            
            freq[s[i] - 'a'] ++;
            
        }

        //printing the frequency array
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] % 2 != 0)
            {
                odd++;
            }
            // printf("%c is %d times\n", i + 'a', freq[i]);
        }

        // if odd count is 0 or 1 it will need to add character and the need ed character will be odd - 1;
        if (odd <= 1)
        {
            printf("0\n");
        }
        else{
            printf("%d\n",odd-1);
        }
        
        
        
    }
    printf("\n");
    return 0;
}