#include "program.hpp"
#include "Item.hpp"
#include "Fruit.hpp"
#include "Snack.hpp"
#include "Seasoning.hpp"
#include <algorithm>
#include <iostream>
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
        items.push_back(new Snack("sandwitch" , 4 , 15)) ;
        items.push_back(new Seasoning("chertopert" , 4 , 12)) ;  

        string targetItem  ;
        int TedadTarget ; 

        //seasoning (8 , 9) ; 

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
    }
    catch(const exception & e){
        std::cerr << e.what() << '\n';
    }

}