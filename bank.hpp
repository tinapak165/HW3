#ifndef BANK_HPP
#define BANK_HPP
#include <string>

class Bank{
    public:
    bool withdraw(double , double ); //only use for person
    bool deposit(double , double ); // only used for shop
    void getBalance()const;
    
    
    private:
    size_t dailytransfered;
    size_t account_number;
    std::string holder_name;
    double balance ;

    
};

#endif