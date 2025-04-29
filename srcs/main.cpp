#include "include/main.h"

int main(){
    Account* newAccount = new Account(1, "Vinícius França Mibielli", "096.124.139-08");
    newAccount->setValueAccount(3102.34);

    std::cout << "ID: " << newAccount->getIdAccount() << " Nome: " << newAccount->getNameAccount() << " CPF: " << newAccount->getCpfAccount() << " Saldo: R$" << newAccount->getValueAccount() << std::endl;
}