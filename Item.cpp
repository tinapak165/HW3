

#include "Item.hpp"
#include <iostream>
#include <stdexcept>

using namespace std;

std::vector<std::string> Item::names; 


Item::Item(std::string n , int a , int p){

    if (a <= 0 || p < 0 ){
        throw invalid_argument(" cant be negative");
        
    }
    cout<<"Item class constructor \n";
    available = a ;
    price = p ; 
    name = n;
    names.push_back(name) ;



}
void Item::operator-( int i  ){

    this->available = this->available - i ;

}
bool Item::is_available()const{

  if ( this->available > 0 ){
        return true;
  }
  else return false;

}
void Item::buy(int b){
    if ( !is_available())
        throw runtime_error("item not available") ; 
    if(b > available)
        throw runtime_error("not enough item") ; 
    
        *this- b ; 
}
int Item::get_available() const {
    return available; 
}
int Item::getPrice() const { 
    return price; 
}



