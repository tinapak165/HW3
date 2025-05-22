#include<iostream>
#include <string>
#include <algorithm>
#include "Fruit.hpp"
using namespace std;


Fruit::Fruit (std::string n , int p , int a , string me) :Item(n,p , a) , measurment(me){
    if (a <= 0 || p < 0 )
        throw invalid_argument("an item can not be negative!!");
    else{
        available = a ;
        price = p ; 
        name = n ; 
        
    }
}

string Fruit::getInfo(){
    return get_name() + " price: " + to_string(get_price()) + " available: " + to_string(get_available()) + " " + measurment ; 
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
void Fruit::set_available(int a){
    available = a ; 
}

void Fruit::buy(int b){
   try {

    if(!is_available())
        throw runtime_error("Item is not available") ; 
    else if( b > available)
        throw runtime_error("Item has sold out completely") ; 
    else if(b>0){
        set_available(available - b); 
        
        cout << "\n you bought the item succesfully !!\n";
    }


 }

 catch (exception &e){
    cout<<e.what();
}
}
