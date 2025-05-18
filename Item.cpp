

#include "Item.hpp"
#include <iostream>
#include <stdexcept>
#include  <vector>

using namespace std;

// std::vector<std::string> names; 


Item::Item(std::string n , int a , int p){

    if (a <= 0 || p < 0 ){
        throw invalid_argument(" cant be negative");
        
    }
    cout<<"Item class constructor \n";
    available = a ;
    price = p ; 
    name = n;
   
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
int Item::get_available() const {
    return available; 
}
int Item::getPrice() const { 
    return price; 
}

string Item::get_Name() const {
    
    return name;
}


