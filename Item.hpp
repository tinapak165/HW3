#ifndef ITEM_HPP
#define ITEM_HPP

#include<iostream>

class Item {
    private :

        int price;

        int measurment;

        int available;
        int buynum;
    public:

        Item(int ,int );
        

        void operator-( int i);
        bool is_available();
        void buy(int b);
        void get_buynum();
        void set_buynum();


};
#endif