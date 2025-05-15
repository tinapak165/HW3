#include <iostream>
#include <stdexcept>
#include "Item.hpp"
#include "Fruit.hpp"
using namespace std;

int main(){
    try
    {
        
        Fruit apple(3 , 100 );
           
       
    }
    catch(const exception & e)
    {
        cerr << e.what() << '\n';
    }
    
 }