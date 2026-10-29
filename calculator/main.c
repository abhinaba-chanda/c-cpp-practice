/* Simple command line calculator. Type expressions like: 12 * 3  (q to quit) */
#include <stdio.h>
#include "calc.h"

int main(void) {
    double a, b;
    char op;
    printf("Simple calculator. Enter: number operator number (e.g. 4 * 2.5). Ctrl+D or q to quit.\n");
    while (1) {
        printf("> ");
        if (scanf(" %lf %c %lf", &a, &op, &b) != 3) break;
        int ok;
        double r = calculate(a, op, b, &ok);
        if (ok) printf("= %g\n", r);
        else printf("Error: invalid operator or divide by zero\n");
    }
    printf("Bye!\n");
    return 0;
}
