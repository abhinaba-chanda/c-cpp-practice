#include "calc.h"
#include <math.h>

double calculate(double a, char op, double b, int *ok) {
    *ok = 1;
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':
            if (b == 0) { *ok = 0; return 0; }
            return a / b;
        case '%':
            if (b == 0) { *ok = 0; return 0; }
            return fmod(a, b);
        default:
            *ok = 0;
            return 0;
    }
}
