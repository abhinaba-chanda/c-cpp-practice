#include <assert.h>
#include <stdio.h>
#include "calc.h"

int main(void) {
    int ok;
    assert(calculate(2, '+', 3, &ok) == 5 && ok);
    assert(calculate(10, '-', 4, &ok) == 6 && ok);
    assert(calculate(3, '*', 4, &ok) == 12 && ok);
    assert(calculate(9, '/', 2, &ok) == 4.5 && ok);
    assert(calculate(10, '%', 3, &ok) == 1 && ok);
    calculate(1, '/', 0, &ok); assert(!ok);
    calculate(1, '^', 2, &ok); assert(!ok);
    printf("All calculator tests passed\n");
    return 0;
}
