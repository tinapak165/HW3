#include "bank.hpp"
#include <iostream>

bool Bank::withdraw(double amount , double dailylimit){
    if (amount <= 0 || amount > dailylimit ){
        std::cout<<"sorry. daily transfer limit is passed .";
        return false; }

    if (amount + dailytransfered > dailylimit ) {
        std::cout<< "sorry. daily transfer limit is passed .";
        return false; }  
        
     
    else 
    balance -= amount;
    return true;
}
/// lllflvlkkkkb

// this function is only for the shop 
bool Bank::deposit(double amount , double dailylimit){
    if (amount > dailylimit ){
        std::cout<<"daily transfer limit is passed .";
        return false;
    }

    if ((amount +  dailytransfered) > dailylimit ){
        std::cout<<"daily transfer limit is passed .";
        return false;
    }

    else 
    balance += amount ;
    return true;

}

double Bank::getBalance()const{

return balance;

    
}
