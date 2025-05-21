#include "bank.hpp"
#include "personalbank.hpp"

Personbank::Personbank(std::string name, int acc_number, double bal): Bank(name, acc_number, bal) {}

bool Personbank::withdraw(double amount , double dailylimit){
    
    
    double newbalance;
    double balance = this->getBalance();
    double dailytransfered_2 ;
    double dailytransfered = this->get_dailytranfered();
    
    if (amount <= 0 || amount > dailylimit ){
        std::cout<<"sorry. daily transfer limit is passed .";
        return false; }

    if (amount + this->get_dailytranfered() > dailylimit ) {
        std::cout<< "sorry. daily transfer limit is passed .";
        return false; }  

    if (amount > this->getBalance()){
        std::cout<<"not enough balance.";
        return false;
    }    
        
     
    else {

        newbalance = balance - amount;
        this->setBalance(newbalance);
        
        dailytransfered_2= dailytransfered + amount;
        this->set_dailytarnsfered(dailytransfered_2);
        
        return true;
    }
}

bool Personbank::deposit(double amount , double dailylimit){return true;}