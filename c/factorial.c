#include <stdio.h>

unsigned long long fact(int n) { return n <= 1 ? 1 : n * fact(n - 1); }

int main(void) {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("%d! = %llu\n", n, fact(n));
    return 0;
}
