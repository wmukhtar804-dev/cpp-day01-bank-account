#include <iostream>
using namespace std;
class Bankaccount
{
private:
    int accountnumber;
    ;
    string accountholder;
    double balance;

public:
    Bankaccount(int accnum, string accname, double bal)
    {
        accountnumber = accnum;
        accountholder = accname;
        if (bal >= 0)
        {
            balance = bal;
        }
    }
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << " amount Deposited: " << amount << endl;
        }
    }
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << " amount Withdrawn: " << amount << endl;
        }
        else
        {
            cout << "Insufficient balance or invalid amount." << endl;
        }
    }
    void display()
    {
        cout << "-------------------------" << endl;
        cout << "Account Number: " << accountnumber << endl;
        cout << "Account Holder: " << accountholder << endl;
        cout << "Balance: " << balance << endl;
        cout << "-------------------------" << endl;
    }
};
int main()
{
    Bankaccount account1(12345, "John Doe", 1000.0);
    account1.deposit(5000);
    account1.display();
    account1.withdraw(4000);
    account1.display();
    Bankaccount account2(12345, "waqas", 1000.0);
    account2.deposit(5000);
    account2.withdraw(7000);
    account2.display();
    return 0;
}
