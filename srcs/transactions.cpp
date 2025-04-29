#include <iostream>
#include <stdio.h>
#include <string>
#include <cctype>

#include "include/transactions.h"

bool transactionByAccounts(Account* contaUm, Account* contaDois, long long transactionBalance){

    if(transactionBalance > contaUm->getBalanceAccount()){
        return false;
    }
    
    contaUm->withdrawAccount(transactionBalance);
    contaDois->depositAccount(transactionBalance);
    return true;
    
}