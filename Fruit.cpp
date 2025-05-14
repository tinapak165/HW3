#include<iostream>
#include<iostream>
#include "fruit.hpp"
using namespace std;

Fruit::Fruit (int p , int a , string me = "kg") : Item (p,a) , measurment(me){
    cout<<" price ; "<< p << "available "<< a << me<<endl;
}


