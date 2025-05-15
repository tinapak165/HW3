#ifndef SNACK_HPP
#define SNACK_HPP
#include <string>
#include "Item.hpp"

class Snack : public Item {

    private:
    
        int price;
        int available;
        std::string measurment ;
        std::string name ; 

    public:
        Snack( std::string name ,int p , int a ,std::string me = "Package");
        //void buying () ; 
        std::string getInfo()const ;
        std::string get_name()const ; 
        void buy(int b) ;
        int get_price() const; 
        int get_available()const ; 
        void set_available(int a) ; 

};

#endif