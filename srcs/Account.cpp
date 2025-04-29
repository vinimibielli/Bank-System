#include "include/account.h"

Account::Account(){
    this->idAccount = 0;
    this->nameAccount = "";
    this->cpfAccount = "";
    this->balanceAccount = 0;
}

Account::~Account(){

}

Account::Account(long long id, std::string name, std::string cpf){
    this->idAccount = id;
    this->nameAccount = name;

    this->cpfAccount.reserve(11);
    for(const auto letter : cpf){
        if(isdigit(letter)){
            this->cpfAccount.append(1, letter);
        }
    }

    this->balanceAccount = 0.00;
}

//idAccount set and get
void Account::setIdAccount(long long id){
    this->idAccount = id;
}
long long Account::getIdAccount(){
    return this->idAccount;
}

//nameAccount set and get
void Account::setNameAccount(std::string name){
    this->nameAccount = name;
}
std::string Account::getNameAccount(){
    return this->nameAccount;
}

//cpfAccount set and get
void Account::setCpfAccount(std::string cpf){
    this->cpfAccount.clear();
    this->cpfAccount.reserve(11);
    for(const auto letter : cpf){
        if(isdigit(letter)){
            this->cpfAccount.append(1, letter);
        }
    }
}
std::string Account::getCpfAccount(){
    return this->cpfAccount;
}

void Account::setBalanceAccount(long long balance){
    this->balanceAccount = balance;
}

long long Account::getBalanceAccount(){
    return this->balanceAccount;
}

void Account::depositAccount(long long deposit){
    this->balanceAccount = this->balanceAccount + deposit;
}

bool Account::withdrawAccount(long long withdraw){
    if(withdraw > this->balanceAccount){
        return false;
    }

    this->balanceAccount = this->balanceAccount - withdraw;
    return true;
    
}
