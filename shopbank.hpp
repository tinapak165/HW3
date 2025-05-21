#ifndef SHOPBANK_HPP
#define SHOPBANK_HPP
#include "bank.hpp"


class Shopbank : public Bank{

    public:
    Shopbank(std::string name, int acc_number, double bal);

    bool withdraw(double , double ) override ; //only use for person
    bool deposit(double , double ) override;




};




#endif