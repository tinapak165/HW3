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
        

        void operator-( int );
        bool is_available(int bn);
        void buy(int b);
        int get_buynum();
        // int set_buynum();


};
#endif