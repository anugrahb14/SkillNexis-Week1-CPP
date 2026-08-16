#include <iostream>
using namespace std;
int main()
{
    double balance = 1000.0;
    double amount;
    int choice;
    cout << "===== ATM MENU PROGRAM =====" << endl;
    do
    {
        cout << "\n----- ATM MENU -----" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
            case 1:
                cout << "\nCurrent Balance: " << balance << endl;
                break;
            case 2:
                cout << "\nEnter deposit amount: ";
                cin >> amount;

                if (amount > 0)
                {
                    balance += amount;
                    cout << "Amount deposited successfully!" << endl;
                    cout << "Current Balance: " << balance << endl;
                }
                else
                {
                    cout << "Invalid deposit amount!" << endl;
                }
                break;
            case 3:
                cout << "\nEnter withdrawal amount: ";
                cin >> amount;
                if (amount <= 0)
                {
                    cout << "Invalid withdrawal amount!" << endl;
                }
                else if (amount > balance)
                {
                    cout << "Insufficient balance!" << endl;
                }
                else
                {
                    balance -= amount;
                    cout << "Amount withdrawn successfully!" << endl;
                    cout << "Current Balance: " << balance << endl;
                }
                break;
            case 4:
                cout << "\nThank you for using the ATM!" << endl;
                break;

            default:
                cout << "\nInvalid choice! Please try again." << endl;
        }
    } while (choice != 4);
    return 0;
}
