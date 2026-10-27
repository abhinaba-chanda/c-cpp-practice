/*
 * Digit tools
 * Sums the digits of a number and reverses it (1234 -> 4321).
 * Practice: integer division, modulo, loops.
 * Build: gcc c/digit_sum.c -o digits && ./digits
 */
#include <stdio.h>

int digit_sum(long n) {
    int sum = 0;
    if (n < 0) n = -n;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

long reverse_number(long n) {
    long rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

#ifndef TESTING
int main(void) {
    long n;
    printf("Enter a positive number: ");
    if (scanf("%ld", &n) != 1) return 1;
    printf("Digit sum: %d\nReversed: %ld\n", digit_sum(n), reverse_number(n));
    return 0;
}
#endif
