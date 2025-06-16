#include <stdio.h>
#include <math.h>

int main() {
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    double left = b * log(a);
    double right = d * log(c);

    if (left > right)
        printf("YES");
    else
        printf("NO");

    return 0;
}