#ifndef PROGRAM_HPP
#define PROGRAM_HPP

#include <vector>
#include "Item.hpp"

class Program{
    private:
        static std::vector<Item*> items ; 
    public:
        static std::vector<std::string> names ; 
        static void Run() ;
        static  std::string showItems() ;  
        void Buying(const std::string ItemName , int tedad) ; 

};

#endif