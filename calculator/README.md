# Calculator

A simple command line calculator in C. Supports `+ - * / %` with decimals and catches divide by zero.

Moved here from my [c-calculator](https://github.com/abhinaba-chanda/c-calculator) repo so all my C practice lives in one place.

## Build and run

```bash
cd calculator
make
./calc
> 12 * 3
= 36
```

On Windows: `gcc -o calc.exe main.c calc.c` then `calc.exe`.

## Tests

```bash
make test
```

From the repo root, `make test` also builds and tests the calculator. More examples in [docs/USAGE.md](docs/USAGE.md).
