#ifndef SEASONING_HPP
#define SEASONING_HPP

#include <string>
#include "Item.hpp"



class Seasoning : public Item {

    private:
    
        int price;
        int available;
        std::string measurment ;
        std::string name ; 

    public:
        Seasoning( std::string name ,int p , int a ,std::string me = "g");
        //void buying () ; 
        std::string getInfo()const ;
        std::string get_name()const ; 
        int get_price() const; 
        void buy(int b) ; 
        int get_available()const ; 
        void set_available(int a) ; 
    

};

#endif