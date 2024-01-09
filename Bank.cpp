#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
   string accountNumber;
   double balance;

public:
   // Constructor to initialize account details
   BankAccount(string accountNumber, double initialBalance = 0.0)
     : accountNumber(accountNumber), balance(initialBalance) {
       cout << "Account " << accountNumber << " created with initial balance: $"
            << balance << endl;
   }

   // Destructor to display a message when the account is destroyed
   ~BankAccount() {
       cout << "Account " << accountNumber << " destroyed." << endl;
   }

   // Other member functions (deposit, withdraw, etc.) can be added here
};

int main() {
   BankAccount account1("123456", 500.0);  // Create account with initial balance
   BankAccount account2("987654");          // Create account with default balance

   return 0;  // Destructors will be called automatically here
}

