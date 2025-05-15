#include <string>
#include <algorithm>
#include "Snack.hpp"
using namespace std;


Snack::Snack (std::string n , int p , int a , string me) : Item(n , p , a) ,measurment(me){
    if (a <= 0 || p < 0 )
        throw invalid_argument("an item can not be negative!!");
    else{
        available = a ;
        price = p ; 
        name = n ; 
    }
}

string Snack::getInfo()const{
    return get_name() + " price: " + to_string(get_price()) + ",available: " + to_string(get_available()) + " " + measurment ; 
}
std::string Snack::get_name()const{
    return name ; 
}
int Snack::get_price()const{
    return price ; 
}
int Snack::get_available()const{
    return available ; 
}
void Snack::buy(int b){
    if ( !is_available())
        throw runtime_error("item not available") ; 
    if(b > available)
        throw runtime_error("not enough item") ; 
    
    set_available(available - b); 
}
void Snack::set_available(int a){
    available = a ; 
}