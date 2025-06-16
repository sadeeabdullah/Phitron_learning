#include <stdio.h>

void print(int n, int k, int s) {
    if (n < 1)
        return;

    // space print
    for (int i = 0; i < k; i++) {
        printf(" ");
    }

    // star print
    for (int i = 0; i < s; i++) {
        printf("*");
    }

    // print newline
    printf("\n");

    // call recursive function
    print(n - 1, k - 1, s + 2);
}

int main() {
    int n;
    scanf("%d", &n);

    // s for star and k for space
    int k = n - 1, s = 1;
    print(n, k, s);

    return 0;
}