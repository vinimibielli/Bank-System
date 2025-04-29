#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <stdio.h>
#include <string>
#include <cctype>

class Account {
    long long idAccount;
    std::string nameAccount;
    std::string cpfAccount;
    long long balanceAccount;

    public:
        Account();
        ~Account();
        Account(long long idAccount, std::string nameAccount, std::string cpfAccount);

        //idAccount set and get
        void setIdAccount(long long id);
        long long  getIdAccount();

        //nameAccount set and get
        void setNameAccount(std::string name);
        std::string getNameAccount();

        //cpfAccount set and get
        void setCpfAccount(std::string cpf);
        std::string getCpfAccount();

        void setBalanceAccount(long long balance);
        long long getBalanceAccount();

        void depositAccount(long long deposit);
        bool withdrawAccount(long long withdraw);
        
    };

#endif