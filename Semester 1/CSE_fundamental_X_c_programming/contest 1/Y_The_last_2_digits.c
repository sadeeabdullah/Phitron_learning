#include <stdio.h>

int main() {
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    //if it is an large number and have chance to overflow then long long int also will not work
    // so then we just have to work with the last 2 digit
    //if we do multiplication of every operand with modulo 100 each and after multiplication modulo

    long long int result = a % 100;
    result = (result * (b % 100)) % 100;
    result = (result * (c % 100)) % 100;
    result = (result * (d % 100)) % 100;

    printf("%02lld\n", result);  // ensures leading zero if needed
    return 0;
}
