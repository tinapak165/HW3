#include "program.hpp"
#include "Item.hpp"
#include "Fruit.hpp"
#include <algorithm>
#include <iostream>
#include <memory>
#include <vector>

using namespace std ;

vector<Item*> Program::items ; 
vector<string> names ; 

string Program::showItems(){
    string result ; 
    for(const auto & item : items)
        result += item->getInfo() + '\n' ; 
    
    return result ; 
}
void Program::clean(){
    for(auto item : items)
        delete item ; 

}
void Program::Run(){
    try
    {
        items.push_back(new Fruit("apple",10,1))  ; 
        items.push_back(new Fruit ("kiwi" , 6, 7)) ; 

        string targetItem  ;
        int TedadTarget ; 

        //Snack sand(6,8) ; 
        //seasoning s(8 , 9) ; 

        cout << "Hello welcome to our shop!" << endl << "here are the items: " << endl ; 
        cout << showItems() ;
        cout << "what do you want to buy? " ;
        cin >> targetItem ; 

        if(binary_search(names.begin() , names.end() , targetItem)){
            cout << "how many " << targetItem << " do you want to buy? " << endl ; 
            cin >> TedadTarget ; 
                //buy() ;    
            }
        else
            cerr << "not found!!" << endl ; 
        
        // items[0] -> buy(1) ; //??
       
    }
    catch(const exception & e)
    {
        std::cerr << e.what() << '\n';
    }

}