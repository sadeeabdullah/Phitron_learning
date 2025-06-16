#include <stdio.h>
#include <string.h>

int main() {
    char word1[101], word2[101];
    scanf("%s %s", word1, word2);
    int len_1 = strlen(word1);
    int len_2 = strlen(word2);

    if (len_1 != len_2) {
        printf("No");
        return 0;
    }
    int freq1[26] = {0}; 
    int freq2[26] = {0};

    for (int i = 0; word1[i] != '\0'; i++) {
        freq1[word1[i] - 97]++;
    }

    for (int i = 0; word2[i] != '\0'; i++) {
        freq2[word2[i] - 97]++;
    }
    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            printf("No");
            return 0;
        }
    }
    printf("Yes");
}
