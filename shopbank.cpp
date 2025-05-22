#include "Shopbank.hpp"
#include "bank.hpp"
#include <iostream>

Shopbank::Shopbank(std::string name, int acc_number, double bal): Bank(name, acc_number, bal){}

bool Shopbank::deposit(double amount , double dailylimit){
     
    double newbalance;
    double balance = this->getBalance();
    double dailytransfered_2 ;
    double dailytransfered = this->get_dailytranfered();
    
    if (amount <= 0 || amount > dailylimit ){
        std::cout<<"sorry. daily transfer limit is passed .";
        return false; }

    else if (amount + this->get_dailytranfered() > dailylimit ) {
        std::cout<< "sorry. daily transfer limit is passed .";
        return false; }  

       

        
     
        else {
    
            newbalance = balance  + amount;
            this->setBalance(newbalance);
            
            dailytransfered_2= dailytransfered + amount;
            this->set_dailytarnsfered(dailytransfered_2);
           
            return true;
            
        }
}

bool Shopbank::withdraw(double amount , double limit){return true;}