// Public Methods

/*
 * Name: Withdrawal
 * Description process a withdrawal request on account
 * Parms:
 *      amt     The amount of the withdrawal
 * Return: true for successful withdrawal: false if not succesful
 */
#include "Account.h"

bool Account::withdraw(double amt) {
    //Ensure there is enough money in the account to make a withdrawal
    if(balance < amt) {
        return false;
    } else {
        balance -= amt;
        numOfTrans++;

        if(numOfTrans == maxTrans) {
            if(!resizeLedger()) {
                cerr << "Out of memory" << endl;
                exit(-1);
            }
        }

        // Add withdrawal to transaction log
        allTransactions[numOfTrans -1].setTransID(numOfTrans);
        allTransactions[numOfTrans -1].setTransType(0);
        allTransactions[numOfTrans -1].setTransAmt(amt);

        return true;
    }
}

bool Account::deposit(double amt) {

    // Process the transaction
    balance -= amt;
    numOfTrans++;

    if(numOfTrans == maxTrans) {
        if(!resizeLedger()) {
            cerr << "Out of memory" << endl;
            exit(-1);
        }
    }

        // Add withdrawal to transaction log
        allTransactions[numOfTrans -1].setTransID(numOfTrans);
        allTransactions[numOfTrans -1].setTransType(1);
        allTransactions[numOfTrans -1].setTransAmt(amt);

        return true;
}

Transaction Account::getTransactionByNum(int i) const {
    Transaction empty;

    if(i >= 1 && i <= numOfTrans)
        return allTransactions[i-1];
    else
        return empty;

}


bool Account::resizeTransLedger() {
    Transaction* temp;

    // Create temp array
    temp = new Transaction[2 * maxTrans];

    // If out of memory stop
    if(temp == NULL) return false;

    //Copy old transactions to new list
    for(int i = 0; i < numOfTrans; i++) {
        temp[i] = allTransactions[i];

    }

    // Deallocate all memory
    delete [] allTransactions;

    allTransactions = temp;

    return true;

}


