#include "Item.hpp"
#include <iostream>
using namespace std;

Item::Item(int p, int){

     cout<<"Item class constructor";

}
void Item::operator-( int i  ){

    this->available = this->available - i ;

}

void Item::buy(int b){

    this - b ;
}
