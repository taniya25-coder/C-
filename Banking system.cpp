#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Account {
public:
    string name;
    double balance;

    Account(string n, double b) : name(n), balance(b) {}

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << ". New Balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrew: " << amount << ". Remaining: " << balance << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }
};

int main() {
    string name;
    cout << "Enter Customer Name: ";
    cin >> name;
    Account acc(name, 1000.0); // Starting balance 1000

    int choice;
    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\nChoice: ";
        cin >> choice;

        if (choice == 1) {
            double amt; cin >> amt; acc.deposit(amt);
        } else if (choice == 2) {
            double amt; cin >> amt; acc.withdraw(amt);
        } else if (choice == 3) {
            cout << "Current Balance: " << acc.balance << endl;
        }
    } while (choice != 4);

    return 0;
}