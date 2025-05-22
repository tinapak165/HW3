#include "bank.hpp"
#include "personalbank.hpp"
#include <iostream>
using namespace std ; 
Personbank::Personbank(string name, int acc_number, double bal): Bank(name, acc_number, bal) {}

bool Personbank::withdraw(double amount , double dailylimit){
    
    
    double newbalance;
    double balance = this->getBalance();
    double dailytransfered_2 ;
    double dailytransfered = this->get_dailytranfered();
    
    if (amount <= 0 || amount > dailylimit ){
        cerr<<"sorry. daily transfer limit is passed .";
        return false; 
    }

    else if (amount + this->get_dailytranfered() > dailylimit ) {
        cerr<< "sorry. daily transfer limit is passed .";
        return false; 
    }  

    else if (amount > this->getBalance()){
        cerr<<"(not enough balance!!)";
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