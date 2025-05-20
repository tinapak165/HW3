#include <string>
#include <vector>
#include "Item.hpp"

class Fruit : public Item {
    
    int price;
    int available;
    std::string measurment ;
    std::string name ; 

    public:
    Fruit( std::string name ,int p , int a ,std::string me = "kg");
    Fruit() ; 
    void buy(int b) override; 
    std::string getInfo() override ;
    std::string get_name() const; 
    int get_price() const; 
    int get_available()const ; 
    void set_available(int a) ; 
    

};