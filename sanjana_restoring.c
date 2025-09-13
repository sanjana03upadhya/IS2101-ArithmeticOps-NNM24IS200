#include <stdio.h>

int main() {
    unsigned int dividend, divisor;
    printf("Restoring Division (positive integers)\n");
    printf("Enter dividend: ");
    scanf("%u", &dividend);
    printf("Enter divisor: ");
    scanf("%u", &divisor);

    if (divisor == 0) {
        printf("Error: division by zero\n");
        return 0;
    }

    unsigned int quotient = 0;
    unsigned int remainder = 0;
    int n = 0;
    unsigned int temp = dividend;

    while (temp > 0) { n++; temp >>= 1; }
    if (n == 0) n = 1;

    for (int i = n - 1; i >= 0; i--) {
        remainder = (remainder << 1) | ((dividend >> i) & 1);
        if (remainder >= divisor) {
            remainder -= divisor;
            quotient = (quotient << 1) | 1;
        } else {
            quotient = (quotient << 1);
        }
    }

    printf("Quotient = %u, Remainder = %u\n", quotient, remainder);
    return 0;
}
