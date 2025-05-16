#include <iostream>
using namespace std;

/**
 * @brief Account class to represent a simple bank account.
 *
 * Data Members:
 * - accountNumber (int): Unique identifier for the account.
 * - firstName (std::string): Account holder's first name.
 * - lastName (std::string): Account holder's last name.
 * - balance (double): Current account balance.
 *
 * Member Functions:
 * - Deposit(double amount): Adds the specified amount to the account balance.
 * - Withdraw(double amount): Deducts the specified amount from the account balance if sufficient funds are available.
 * - DisplayInfo(): Displays the account number, holder's full name, and current balance.
 *
 * Usage in main():
 * - Create an Account object.
 * - Allow the user to perform deposit and withdrawal operations.
 * - Display updated account information after each transaction.
 */


 class Account
 {
    private:
        int accountNumber;
        string firstName;
        string lastName;
        double balance;

    public:
        // Constructor to initialize account details
        Account(int accNum, string fName, string lName, double initialBalance)
            : accountNumber(accNum), firstName(fName), lastName(lName), balance(initialBalance) {}

        // Function to deposit money into the account
        void Deposit(double amount)
        {
            if (amount > 0)
            {
                balance += amount;
                cout << "Deposited: " << amount << endl;
            }
            else
            {
                cout << "Invalid deposit amount." << endl;
            }
        }

        // Function to withdraw money from the account
        void Withdraw(double amount)
        {
            if (amount > 0 && amount <= balance)
            {
                balance -= amount;
                cout << "Withdrawn: " << amount << endl;
            }
            else
            {
                cout << "Invalid withdrawal amount or insufficient funds." << endl;
            }
        }

        // Function to display account information
        void DisplayInfo()
        {
            cout << "Account Number: " << accountNumber << endl;
            cout << "Account Holder: " << firstName << " " << lastName << endl;
            cout << "Current Balance: $" << balance << endl;
        }

 };


 int main()
 {
    // Create an Account object
    Account myAccount(123456, "John", "Doe", 1000.0);

    // Display initial account information
    myAccount.DisplayInfo();

    // Perform deposit and withdrawal operations
    myAccount.Deposit(500.0);
    myAccount.Withdraw(200.0);

    // Display updated account information
    myAccount.DisplayInfo();

    return 0;
 }