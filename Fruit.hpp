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
    void buying () ; 
    std::string getInfo()const ;
    std::string get_name()const ; 
    int get_price() const; 
    int get_available()const ; 
    

};