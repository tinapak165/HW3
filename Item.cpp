#include "Item.hpp"
#include <iostream>
#include <stdexcept>
#include  <vector>

using namespace std;

Item::Item(std::string n , int p , int a){

    if (a <= 0 || p < 0 )
        throw invalid_argument(" cant be negative");

    available = a ;
    price = p ; 
    name = n;
   
}
void Item::operator-( int i  ){

    this->available = this->available - i ;

}
bool Item::is_available()const{

    return available > 0 ; 

}
int Item::get_available() const {
    return available; 
}
int Item::getPrice() const { 
    return price; 
}

string Item::get_Name() const {
    
    return name;
}


