// Tests for the C++ exercises. Run: make test
#define TESTING
#include <cassert>
#include <iostream>
#include "../cpp/bank_account.cpp"
#include "../cpp/fibonacci.cpp"

int main() {
    BankAccount acc("Abhinaba", 100);
    acc.deposit(50);
    assert(acc.balance() == 150);
    assert(!acc.withdraw(500));
    assert(acc.balance() == 150);
    assert(acc.withdraw(100));
    assert(acc.balance() == 50);
    bool threw = false;
    try { acc.deposit(-5); } catch (const std::invalid_argument&) { threw = true; }
    assert(threw);

    auto fib = fibonacci(10);
    assert(fib.size() == 10);
    assert(fib[0] == 0 && fib[1] == 1 && fib[9] == 34);
    assert(fibonacci(0).empty());
    assert(fibonacci(91).back() == 2880067194370816120ULL);

    std::cout << "All C++ tests passed\n";
    return 0;
}
