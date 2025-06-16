#include <stdio.h>

// Count number of digits in n
int count_digit(int n) {
    if (n == 0) return 1; // handle 0 explicitly
    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}

// Return 1 if number has equal even and odd digits, else 0
int balanced_digit_check(int n) {
    int even_digit = 0, odd_digit = 0;

    if (n == 0) {
        even_digit = 1;  // 0 is even digit
    }

    while (n > 0) {
        int dg = n % 10;
        if (dg % 2 == 0)
            even_digit++;
        else
            odd_digit++;
        n /= 10;
    }

    return even_digit == odd_digit ? 1 : 0;
}

int main() {
    int l, r;
    scanf("%d %d", &l, &r);

    int found = 0;

    for (int i = l; i <= r; i++) {
        int digits = count_digit(i);

        // Only numbers with even digit count can be balanced
        if (digits % 2 != 0) continue;

        if (balanced_digit_check(i)) {
            printf("%d\n", i);
            found = 1;
        }
    }

    if (!found) {
        printf("-1\n");
    }

    return 0;
}
