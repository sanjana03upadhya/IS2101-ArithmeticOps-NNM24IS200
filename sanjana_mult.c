#include <stdio.h>

int main() {
    long long a, b;
    printf("Enter multiplicand: ");
    scanf("%lld", &a);
    printf("Enter multiplier: ");
    scanf("%lld", &b);
    int sign = 0;
    if ((a < 0) ^ (b < 0)) sign = 1;
    unsigned long long x = (a < 0 ? -a : a);
    unsigned long long y = (b < 0 ? -b : b);
    unsigned long long product = 0;
    for (int i = 0; i < 64; i++) {
        if (y & (1ULL << i)) {
            product += (x << i);
        }
    }
    long long result = sign ? -(long long)product : (long long)product;
    printf("Result = %lld\n", result);
    return 0;
}
