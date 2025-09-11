#include <stdio.h>
#include <stdlib.h>
int main() {
    long long a, b;
    printf("Enter multiplicand: ");
    scanf("%lld", &a);
    printf("Enter multiplier: ");
    scanf("%lld", &b);
    int sign = (a<0) ^ (b<0);
    unsigned long long x = llabs(a), y = llabs(b), p = 0;
    while (y > 0) {
        if (y & 1) p += x;
        x <<= 1;
        y >>= 1;
    }
    long long ans = sign ? -(long long)p : (long long)p;
    printf("Result = %lld\n", ans);
    return 0;
}
