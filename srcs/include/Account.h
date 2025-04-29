#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <stdio.h>
#include <string>

class Account {
    int idAccount;
    std::string nameAccount;
    std::string cpfAccount;
    double valueAccount;

    public:
        Account();
        ~Account();
        Account(int idAccount, std::string nameAccount, std::string cpfAccount);

        //idAccount set and get
        void setIdAccount(int id);
        int  getIdAccount();

        //nameAccount set and get
        void setNameAccount(std::string name);
        std::string getNameAccount();

        //cpfAccount set and get
        void setCpfAccount(std::string cpf);
        std::string getCpfAccount();

        void setValueAccount(double value);
        double getValueAccount();

    };

#endif