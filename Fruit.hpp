#include <string>
#include "Item.hpp"

class Fruit : public Item {
    
    int price;
    int available;
    std::string measurment ;

    public:
    // Fruit (){}
    Fruit(int p , int a ,std::string me = "kg");


    
     void buying (){

        std::cout<<"buy function in Fruit class";

    }

};