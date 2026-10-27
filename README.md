<h1 align="center">💻 C / C++ Practice</h1>
<p align="center"><img src="https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black" /> <img src="https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=cplusplus&logoColor=white" /> <a href="https://github.com/abhinaba-chanda/c-cpp-practice/actions/workflows/test.yml"><img src="https://github.com/abhinaba-chanda/c-cpp-practice/actions/workflows/test.yml/badge.svg" alt="tests" /></a></p>

<p align="center">Basic C and C++ programs I wrote to understand loops, recursion, arrays, vectors and strings.</p>

## 📂 Programs

| Program | Language | What it does | Concepts practiced |
|---|---|---|---|
| [`c/prime.c`](c/prime.c) | C | Checks if a number is prime (only tests up to √n) | loops, functions, efficiency |
| [`c/factorial.c`](c/factorial.c) | C | Calculates n! using recursion | recursion, `unsigned long long` |
| [`cpp/student_grades.cpp`](cpp/student_grades.cpp) | C++ | Takes marks for any number of subjects, prints the average and a grade | `vector`, ternary operator |
| [`cpp/reverse_string.cpp`](cpp/reverse_string.cpp) | C++ | Reverses any line of text | `string`, `<algorithm>` |
| [`c/gcd.c`](c/gcd.c) | C | Finds the GCD and LCM of two numbers | loops, Euclid's algorithm |
| [`c/sieve.c`](c/sieve.c) | C | Lists all primes up to 10,000 | arrays, nested loops |
| [`c/digit_sum.c`](c/digit_sum.c) | C | Sums and reverses the digits of a number | integer division, modulo |
| [`cpp/bank_account.cpp`](cpp/bank_account.cpp) | C++ | Deposits and withdraws from a bank account | classes, exceptions |
| [`cpp/fibonacci.cpp`](cpp/fibonacci.cpp) | C++ | Lists the first n Fibonacci numbers | vectors, loops |

## ▶️ How to run

```bash
git clone https://github.com/abhinaba-chanda/c-cpp-practice.git
cd c-cpp-practice
gcc c/prime.c -o prime && ./prime
g++ cpp/student_grades.cpp -o grades && ./grades
```

## ✅ Tests

Run `make test` to compile every program and run the C and C++ assertion tests. GitHub Actions does the same on each push and pull request. Run `make clean` to remove the binaries.

## 🧠 What I learned
- How C and C++ handle input/output differently (`scanf` vs `cin`)
- Thinking about efficiency (checking divisors only up to √n)
- Using the C++ standard library instead of writing everything by hand

## 🚀 Next ideas
- [x] Sieve of Eratosthenes for many primes at once
- [x] Bank account system using C++ classes
- [ ] Simple matrix operations in C

---
<p align="center">Made with 💙 by <a href="https://github.com/abhinaba-chanda">Abhinaba</a></p>
