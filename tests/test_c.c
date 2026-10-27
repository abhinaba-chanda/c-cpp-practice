/* Tests for the C exercises. Run: make test */
#define TESTING
#include <assert.h>
#include <stdio.h>
#include "../c/gcd.c"
#include "../c/sieve.c"
#include "../c/digit_sum.c"

int main(void) {
    assert(gcd(12, 18) == 6);
    assert(gcd(17, 5) == 1);
    assert(gcd(-8, 12) == 4);
    assert(lcm(4, 6) == 12);
    assert(lcm(0, 9) == 0);

    int primes[MAX_N];
    assert(sieve(30, primes) == 10);
    assert(primes[0] == 2 && primes[9] == 29);
    assert(sieve(1, primes) == 0);
    assert(sieve(100, primes) == 25);

    assert(digit_sum(1234) == 10);
    assert(digit_sum(0) == 0);
    assert(reverse_number(1234) == 4321);
    assert(reverse_number(1200) == 21);

    printf("All C tests passed\n");
    return 0;
}
