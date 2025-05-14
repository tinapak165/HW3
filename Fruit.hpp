#include <string>
#include "Item.hpp"

class Fruit : public Item {
    
    int price;
    int available;
    std::string measurment ;

    public:
    // Fruit (){}
    Fruit(int p ,std::string me = "kg", int a) : Item ( p , a) , measurment (me) {std::cout<<"fruit class";}


    
     void buying (){
        std::cout<<"buy function in Fruit class";

    }

};