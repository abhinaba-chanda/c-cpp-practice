#include <assert.h>
#include <stdio.h>

static int reverse_number(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

static int is_palindrome(int n) { return n >= 0 && reverse_number(n) == n; }

int main(void) {
    assert(is_palindrome(121));
    assert(!is_palindrome(123));
    assert(reverse_number(1234) == 4321);
    printf("121 palindrome: %s\n", is_palindrome(121) ? "yes" : "no");
    return 0;
}
