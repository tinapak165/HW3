#ifndef PROGRAM_HPP
#define PROGRAM_HPP

#include <vector>
#include "Item.hpp"
#include"bank.hpp"
#include "personalbank.hpp"
#include "shopbank.hpp"

class Program{
    private:
    
    static std::vector<Item*> items ; 
    static std::vector<std::string> names ;
    static std::vector<std::pair<int, std::string>> basket; 

    public:
       
        static void Run() ;
        static std::string showItems() ;  
        void showingBasket(const std::string &item , int tedad) ; 
        void Buying( const std::string ItemName , int tedad) ; 


};

#endif