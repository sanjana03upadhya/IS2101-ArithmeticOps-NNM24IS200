#include <stdio.h>

int main() {
    unsigned int dividend, divisor;
    printf("Enter dividend: ");
    scanf("%u", &dividend);
    printf("Enter divisor: ");
    scanf("%u", &divisor);

    unsigned int quotient = 0;
    unsigned int remainder = 0;

    for (int i = 31; i >= 0; i--) {
        remainder = (remainder << 1) | ((dividend >> i) & 1);

        if (remainder >= divisor) {
            remainder -= divisor;
            quotient = (quotient << 1) | 1;
        } else {
            quotient = (quotient << 1);
        }
    }

    printf("Quotient = %u Remainder = %u\n", quotient, remainder);
    return 0;
}
