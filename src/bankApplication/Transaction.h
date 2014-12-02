
#ifndef TRANSACTION_H
#define TRANSACTION_H

using namespace std;

class Transaction {
    public:
        // Constructor
        Transaction() {

        }

        // Getters
        int getTransID() {
            return transactionID;
        }

        int getTransType() {
            return transactionType;
        }

        int getTransAmt() {
            return transactionAmt;
        }

        // Setters




    private:
        int transactionID;
        int transactionType;

        double transactionAmt;
};

#endif // TRANSACTION_H
