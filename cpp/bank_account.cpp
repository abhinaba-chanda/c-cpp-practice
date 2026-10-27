/*
 * Bank account
 * A small BankAccount class with deposit, withdraw and balance checks.
 * Practice: classes, private members, constructors, exceptions.
 * Build: g++ cpp/bank_account.cpp -o bank && ./bank
 */
#include <iostream>
#include <stdexcept>
#include <string>

class BankAccount {
public:
    explicit BankAccount(std::string owner, double opening = 0) : owner_(std::move(owner)), balance_(opening) {
        if (opening < 0) throw std::invalid_argument("opening balance cannot be negative");
    }

    void deposit(double amount) {
        if (amount <= 0) throw std::invalid_argument("deposit must be positive");
        balance_ += amount;
    }

    // Returns false (and changes nothing) if there is not enough money.
    bool withdraw(double amount) {
        if (amount <= 0) throw std::invalid_argument("withdrawal must be positive");
        if (amount > balance_) return false;
        balance_ -= amount;
        return true;
    }

    double balance() const { return balance_; }
    const std::string& owner() const { return owner_; }

private:
    std::string owner_;
    double balance_;
};

#ifndef TESTING
int main() {
    BankAccount acc("Abhinaba", 500);
    acc.deposit(250);
    std::cout << acc.owner() << " has " << acc.balance() << "\n";
    if (!acc.withdraw(1000)) std::cout << "Not enough money for 1000\n";
    acc.withdraw(300);
    std::cout << "After withdrawing 300: " << acc.balance() << "\n";
    return 0;
}
#endif
