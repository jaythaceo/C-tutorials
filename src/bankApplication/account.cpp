// Public Methods

/*
 * Name: Withdrawal
 * Description process a withdrawal request on account
 * Parms:
 *      amt     The amount of the withdrawal
 * Return: true for successful withdrawal: false if not succesful
 */

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
