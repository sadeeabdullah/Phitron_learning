#include <stdio.h>

int main() {
    int l1, r1, l2, r2;
    scanf("%d %d %d %d", &l1, &r1, &l2, &r2);
    int start = (l1 > l2) ? l1 : l2;
    int end = (r1 < r2) ? r1 : r2;  
    if (start > end) {
        printf("-1\n");
    } else {
        printf("%d %d\n", start, end);
    }

    return 0;
}
