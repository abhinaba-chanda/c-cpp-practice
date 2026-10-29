#ifndef CALC_H
#define CALC_H

/* Applies op (+ - * / %) to a and b. Sets *ok to 0 on an invalid op or divide by zero. */
double calculate(double a, char op, double b, int *ok);

#endif
