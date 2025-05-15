#include <string>
#include "Item.hpp"

class Fruit : public Item {

    private:
   
      int price;
      int available;
      std::string measurment ;

    public:
    // Fruit (){}
     Fruit(int , int ,std::string);


    
     void buying (){

        std::cout<<"buy function in Fruit class";

        }

};