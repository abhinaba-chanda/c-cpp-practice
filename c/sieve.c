/*
 * Sieve of Eratosthenes
 * Finds every prime up to n at once by crossing out multiples.
 * Practice: arrays, nested loops, efficiency.
 * Build: gcc c/sieve.c -o sieve && ./sieve
 */
#include <stdio.h>
#include <string.h>

#define MAX_N 10000

/* Fills primes[] with the primes <= n and returns how many it found. */
int sieve(int n, int primes[]) {
    static char composite[MAX_N + 1];
    int count = 0;
    if (n > MAX_N) n = MAX_N;
    memset(composite, 0, sizeof composite);
    for (int i = 2; i <= n; i++) {
        if (composite[i]) continue;
        primes[count++] = i;
        for (long j = (long)i * i; j <= n; j += i) composite[j] = 1;
    }
    return count;
}

#ifndef TESTING
int main(void) {
    int n, primes[MAX_N];
    printf("Show primes up to (max %d): ", MAX_N);
    if (scanf("%d", &n) != 1) return 1;
    int count = sieve(n, primes);
    for (int i = 0; i < count; i++) printf("%d ", primes[i]);
    printf("\n%d primes found\n", count);
    return 0;
}
#endif
