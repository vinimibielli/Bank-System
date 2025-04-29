#include "include/Account.h"

Account::Account(){
    this->idAccount = NULL;
    this->nameAccount = "";
    this->cpfAccount = "";
    this->valueAccount = NULL;
}

Account::~Account(){

}

Account::Account(int id, std::string name, std::string cpf){
    this->idAccount = id;
    this->nameAccount = name;
    this->cpfAccount = cpf;
    this->valueAccount = 0.00;
}

//idAccount set and get
void Account::setIdAccount(int id){
    this->idAccount = id;
}
int  Account::getIdAccount(){
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
    this->cpfAccount = cpf;
}
std::string Account::getCpfAccount(){
    return this->cpfAccount;
}

void Account::setValueAccount(double value){
    this->valueAccount = this->valueAccount + value;
}
double Account::getValueAccount(){
    return this->valueAccount;
}
