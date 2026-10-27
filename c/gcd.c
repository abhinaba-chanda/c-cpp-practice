/*
 * GCD and LCM
 * Finds the greatest common divisor with Euclid's algorithm,
 * then uses it to get the least common multiple.
 * Practice: while loops, modulo, functions.
 * Build: gcc c/gcd.c -o gcd && ./gcd
 */
#include <stdio.h>

int gcd(int a, int b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

long long lcm(int a, int b) {
    if (a == 0 || b == 0) return 0;
    return (long long)a / gcd(a, b) * b;
}

#ifndef TESTING
int main(void) {
    int a, b;
    printf("Enter two numbers: ");
    if (scanf("%d %d", &a, &b) != 2) return 1;
    printf("GCD = %d, LCM = %lld\n", gcd(a, b), lcm(a, b));
    return 0;
}
#endif
