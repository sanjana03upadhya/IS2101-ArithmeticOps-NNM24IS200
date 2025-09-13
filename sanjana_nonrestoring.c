#include <stdio.h>

int main() {
    unsigned int dividend, divisor;
    printf("Non-Restoring Division (positive integers)\n");
    printf("Enter dividend: ");
    scanf("%u", &dividend);
    printf("Enter divisor: ");
    scanf("%u", &divisor);

    if (divisor == 0) {
        printf("Error: division by zero\n");
        return 0;
    }

    unsigned int quotient = 0;
    int remainder = 0;
    int n = 0;
    unsigned int temp = dividend;

    while (temp > 0) { n++; temp >>= 1; }
    if (n == 0) n = 1;

    for (int i = n - 1; i >= 0; i--) {
        remainder = (remainder << 1) | ((dividend >> i) & 1);

        if (remainder >= 0) {
            remainder -= divisor;
            quotient = (quotient << 1) | 1;
        } else {
            remainder += divisor;
            quotient = (quotient << 1) | 0;
        }

        printf("Step %d: Remainder = %d, Quotient = %u\n", n - i, remainder, quotient);
    }
    if (remainder < 0)
        remainder += divisor;

    printf("Final Result -> Quotient = %u, Remainder = %d\n", quotient, remainder);
    return 0;
}
