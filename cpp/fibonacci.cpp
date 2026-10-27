/*
 * Fibonacci
 * Builds the first n Fibonacci numbers in a vector (0, 1, 1, 2, 3, 5, ...).
 * Practice: vector, loops, unsigned long long for big numbers.
 * Build: g++ cpp/fibonacci.cpp -o fib && ./fib
 */
#include <iostream>
#include <vector>

std::vector<unsigned long long> fibonacci(int n) {
    std::vector<unsigned long long> seq;
    for (int i = 0; i < n; i++) {
        if (i < 2) seq.push_back(i);
        else seq.push_back(seq[i - 1] + seq[i - 2]);
    }
    return seq;
}

#ifndef TESTING
int main() {
    int n;
    std::cout << "How many Fibonacci numbers? ";
    if (!(std::cin >> n)) return 1;
    for (auto x : fibonacci(n)) std::cout << x << " ";
    std::cout << "\n";
    return 0;
}
#endif
