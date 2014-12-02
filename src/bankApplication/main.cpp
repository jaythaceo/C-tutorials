
#include <iostream>
#include <string>
#include <iomanip>

// Cyber Bank header files
#include "Account.h"
#include "Transaction.h"

using namespace std;

const int MAX_ACCTS = 10;

void showAllTrans(const Account&);
void showMenu();
void makeDeposit(Account&);
void makeWithDrawal(Account&);
void showBalance(const Account&);
void openAccount(Account[], int&);
int login(Account[], int);



int main(int argc, const char *argv[])
{

    Account Checking("Jason Brooks", 550000, 1122);
    char selection;

    // Set all output to have 2 decimal places
    cout << fixed << showpoint << setprecision(2);

    // Controls the menu and processing selections
    do {

        showMenu();

        cin >> selection;
        cin.ignore(80, '\n');

        switch(selection) {
            case 'a':
            case 'A':
                showBalance(Checking);
                break;
            case 'b':
            case 'B':
                makeDeposit(Checking);
                break;
            case 'c':
            case 'C':
                makeWithDrawal(Checking);
                break;
            case 'd':
            case 'D':
                showAllTrans(Checking);
                break;
            case 'e':
            case 'E':
                cout << "Thank you for visting The Brooks Bank & Trust" << endl;
                return 0;
            defaut:
                cout << "Invalid selection. Please try again" << endl;
                break;
        };
    } while(true);


    return 0;

}


void showMenu() {
    cout << "\t\tBank Menu";
    cout << "---------------------------------\n";
    cout << "A) Show account balance\n";
    cout << "B) Make a deposit\n";
    cout << "C) Make a withdrawal\n";
    cout << "D) Show all transactions\n";
    cout << "E) Exit and Logout\n";
    cout << "Please make your choice: ";
}


void makeDeposit(Account& acct) {
    double amount;

    cout << "Please enter amount for deposit: $";
    cin >> amount;

    if(acct.deposit(amount))
        cout << "deposit made succesfully" << endl;
    else
        cout << "deposit error contact your branch" << endl;

}

void makeWithDrawal(Account& acct) {
    double amount;

    cout << "Please enter amount to withdraw: $";
    cin >> amount;

    if(acct.withdraw(amount))
        cout << "withdrawal made succesfully" << endl;
    else
        cout << "withdrawal error contact branch" << endl;

}

void showBalance(const Account& acct) {
    cout << "Account: " << acct.getAccountNum() << endl;
    cout << "Your current balance is: $";
    cout << acct.getBalance() << endl;
}

void showAllTrans(const Account& acct) {
    string transType;
    Transaction currentTrans;

    cout << "Transaction Ledger" << endl;
    cout << "Account Name: " << acct.getName() << endl;
    cout << "Account Number: " << acct.getAccountNum() << endl;

    // Process each transaction one at a time
    for(int i = 1; i <= acct.getNumOfTrans(); i++) {

        currentTrans = acct.getTransactionByNum(i);

        cout << currentTrans.getTransID() << " ";

        switch(currentTrans.getTransID()) {
            case 0:
                transType = "Withdrawal";
                break;
            case 1:
                transType = "Deposit";
                break;
            default:
                transType = "Unknown";
                break;

        };

        cout << transType << " ";
        cout << currentTrans.getTransAmt() << endl;

    }
}

















