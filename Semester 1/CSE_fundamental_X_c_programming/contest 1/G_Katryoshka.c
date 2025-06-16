#include <stdio.h>

int main() {
    long long int n, m, k;
    scanf("%lld %lld %lld", &n, &m, &k);

    if (n == 0 || k == 0) {
        printf("0");
        return 0;
    }

    long long int max_count = 0;
    long long int original_n = n, original_m = m, original_k = k;

    // Test all possible combinations of formations
    for (int strategy = 1; strategy <= 3; strategy++) {
        long long int count = 0;
        n = original_n;
        m = original_m;
        k = original_k;

        // Strategy 1: Prioritize Formation 3, then Formation 1
        if (strategy == 1) {
            // Formation 3 first
            while (n >= 1 && m >= 1 && k >= 1) {
                count++;
                n--;
                m--;
                k--;
            }
            // Then Formation 1
            while (n >= 2 && k >= 1) {
                count++;
                n -= 2;
                k--;
            }
        }
        // Strategy 2: Prioritize Formation 2, then Formation 1
        else if (strategy == 2) {
            // Formation 2 first
            while (n >= 2 && m >= 1 && k >= 1) {
                count++;
                n -= 2;
                m--;
                k--;
            }
            // Then Formation 1
            while (n >= 2 && k >= 1) {
                count++;
                n -= 2;
                k--;
            }
        }
        // Strategy 3: Formation 1 only
        else {
            while (n >= 2 && k >= 1) {
                count++;
                n -= 2;
                k--;
            }
        }

        if (count > max_count) {
            max_count = count;
        }
    }

    printf("%lld", max_count);
    return 0;
}