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
vector<string> Program::names ; 
vector<pair<int,string>> Program::basket;    

string Program::showItems(){
    string result ; 
    for(const auto & item : items)
        result += item->getInfo() + '\n' ; 
    
    return result ; 
}

void Program::showingBasket(const std::string &item, int tedad) {
    bool found = false  ; 
    Item *i = new Fruit();
    if(i->is_available()){
        found = false ; 
        for(auto & ba : basket){
        if(item == ba.second){
            ba.first += tedad;
            found = true ; 
            break;
        }      
    }
}


    if(!found)
        basket.push_back({tedad, item});

    for(const auto& bas : basket) {
        cout << bas.first << " " << bas.second << endl;
    }
}

void Program::Run(){
    try
    {
        items.push_back(new Fruit("apple",10,1))  ; 
        names.push_back("apple") ; 
        items.push_back(new Fruit ("kiwi" , 6, 7)) ;
        names.push_back("kiwi") ;  
        items.push_back(new Snack("sandwitch" , 4 , 15)) ;
        names.push_back("sandwitch") ; 
        items.push_back(new Seasoning("chertopert" , 4 , 12)) ;  
        names.push_back("chertooert") ; 

        string targetItem  ;
        int TedadTarget ; 
        bool found ; 

        cout << "Hello welcome to our shop!" << endl << "here are the items: " << endl ; 

        while(true){
            cout << showItems() ;
            cout<<"-----------------------------------\n";
            //cout << "and here is your bank account: " ;//showaccount()?? ; 
            cout << "what do you want to buy ? (type bye to leave the shop)" ;
            
            cin >> targetItem ; 
            if(targetItem == "bye") {
                cout << "bye bye!" << endl ; 
                break  ;
            }   

            auto it  = find(names.begin() , names.end() , targetItem) ; 
    
            if(it != names.end()){
                //cout << "found " << *it << endl  ;  
                found = true ; 
            }
            else{
                cout << "no found" << endl;
                found = false ;  
            }
    
            if(found){
                
                cout << "how many " << targetItem << " do you want to buy? " ; 
                cin >> TedadTarget ; 
                Program p ; 
                p.Buying(targetItem,  TedadTarget) ;
    
                cout<< " your basket :";
                p.showingBasket(targetItem,TedadTarget) ; 

                //cout << "your bank account: " ; //showaccount()
            }
            else
                cerr << "not found!!" << endl ; 
                 
            cout <<  endl << "what else do you want to buy? " << endl;        
        }
    }
    catch(const exception & e){
        std::cerr << e.what() << '\n';
    }
}

void Program::Buying(const std::string ItemName , int tedad){
    for(auto item : items){
        if(item ->get_Name() == ItemName){
            item->buy(tedad) ; 

            cout << "you bought " << tedad << " " << ItemName << " !! \n" ;
            cout<<"-----------------------------------\n";
            return; 
        }
    }
    cout << "item not found!! " << endl ;
     cout<<"-----------------------------------\n";
}
