#include<iostream>
#include <string>
#include <algorithm>
#include "Fruit.hpp"
using namespace std;

std::vector<std::string> Fruit::names; 

Fruit::Fruit (std::string n , int p , int a , string me) : measurment(me){
    if (a <= 0 || p < 0 )
        throw invalid_argument("an item can not be negative!!");
    else{
        available = a ;
        price = p ; 
        name = n ; 
        names.push_back(n) ;
        sort(names.begin() , names.end()) ; 
    }
}

string Fruit::getInfo()const{
    return get_name() + " price: " + to_string(get_price()) + ",available: " + to_string(get_available()) + " " + measurment ; 
}
std::string Fruit::get_name()const{
    return name ; 
}
int Fruit::get_price()const{
    return price ; 
}
int Fruit::get_available()const{
    return available ; 
}