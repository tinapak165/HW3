#include "Item.hpp"
#include <iostream>
#include <stdexcept>

using namespace std;

Item::Item(int p =1 , int a = 10){

    if (a <= 0 || p < 0 ){
        throw invalid_argument(" cant be negative");
        
    }
    cout<<"Item class constructor \n";

}
void Item::operator-( int i  ){

    this->available = this->available - i ;

}

// buynum is how many what customer wants
int Item::get_buynum(){
    cout<<"how many do you want? example: 2 ";
    cin>> buynum;
    return buynum;
}


bool Item::is_available(int buynum){

   if (this->available > buynum ){return true;}

   else if ( this->available > 0 ){return true;}

   else return false;

}

void Item::buy(int b){
   if ( is_available( buynum))
   {*this - b ;}

    else cerr<< "Item is not availalbe";
}



