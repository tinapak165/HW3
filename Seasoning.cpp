#include <string>
#include <algorithm>
#include "Seasoning.hpp"
using namespace std;

std::vector<std::string> Seasoning::names; 

Seasoning::Seasoning (std::string n , int p , int a , string me) : measurment(me){
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

string Seasoning::getInfo()const{
    return get_name() + " price: " + to_string(get_price()) + ",available: " + to_string(get_available()) + " " + measurment ; 
}
std::string Seasoning::get_name()const{
    return name ; 
}
int Seasoning::get_price()const{
    return price ; 
}
int Seasoning::get_available()const{
    return available ; 
}