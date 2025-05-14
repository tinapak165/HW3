#ifndef ITEM_HPP
#define ITEM_HPP

#include<iostream>

class Item {
    private :

        int price;

        int measurment;

        int available;
    public:
    
        Item(int ,int){}


        void operator-( int i);
        void buy(int b);


};
#endif