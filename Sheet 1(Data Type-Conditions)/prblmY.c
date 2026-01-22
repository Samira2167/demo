#include <stdio.h>

int main() {
    long long A, B, C, D;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);

    // Compute product modulo 100 to get last two digits
    long long result = (A % 100) * (B % 100);
    result = (result % 100) * (C % 100);
    result = (result % 100) * (D % 100);
    result %= 100;

    // Always print two digits (e.g., 07 instead of 7, 00 instead of 0)
    printf("%02lld\n", result);

    return 0;
}