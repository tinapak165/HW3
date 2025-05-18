#ifndef PERSONALBANK_HPP
#define PERSONALBANK_HPP
#include <string>
#include <iostream>
#include "bank.hpp"

class Personbank : public Bank {

    public:

    Personbank(std::string , int , int):Bank ( holder_name,  account_number ,  balance )
    {std::cout<<"persooooonnallll";}
    bool withdraw(double , double ); //only use for person
    // bool deposit(double , double ); // only used for shop
    double getBalance()const;       
    
    
    private:
    size_t dailytransfered;
    size_t account_number;
    std::string holder_name;
    double balance ;



};

#endif 