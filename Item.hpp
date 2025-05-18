#ifndef ITEM_HPP
#define ITEM_HPP

#include <iostream>

class Item {
    private : 

        int price;

        std::string name ; 

        int masurment;

        int available;
    public:
        Item(std::string , int ,int );
        void operator-( int i);
        bool is_available() const;
        virtual void buy(int b) = 0 ;
        virtual std::string getInfo() = 0;  
        int get_available() const ; 
        int getPrice() const ; 
        std::string get_Name() const ; 


};
#endif