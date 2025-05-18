#ifndef BANK_HPP
#define BANK_HPP
#include <string>
#include <iostream>
class Bank{
    public:
    Bank (std::string name, size_t account_name , double balance ) {std::cout<<"basededdddd";}
    bool withdraw(double , double ); //only use for person
    bool deposit(double , double ); // only used for shop
    double getBalance()const;
    
    
    private:
    size_t dailytransfered;
    size_t account_number;
    std::string holder_name;
    double balance ;

    
};

#endif