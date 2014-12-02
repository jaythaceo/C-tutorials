
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

    Accout Checking("Jason Brooks", 550000, 1122);
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
    cout << "Please make your choice: "
}


void makeDeposit(Accout& acct) {
    double amount;

    cout << "Please enter amount for deposit: $";
    cin >> amount;

    if(acct.deposit(amount))
        cout << "deposit made succesfully" << endl;
    else
        cout << "deposit error contact your branch" << endl;

}



















