#include <string>
#include <algorithm>
#include "Seasoning.hpp"
#include "Item.hpp"
using namespace std;


Seasoning::Seasoning (std::string n , int p , int a , string me) : Item( n , p , a) , measurment(me){
    if (a <= 0 || p < 0 )
        throw invalid_argument("an item can not be negative!!");
    else{
        available = a ;
        price = p ; 
        name = n ; 
    }
}

string Seasoning::getInfo(){
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
void Seasoning::buy(int b){
    if ( !is_available())
        throw runtime_error("\nitem not available") ; 
    else if(b > available)
        throw runtime_error("\nnot enough item") ; 
    else if(b>0)
        set_available(available - b) ; 

}
void Seasoning::set_available(int a){
    available = a ; 
}