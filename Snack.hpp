#include <string>
#include <vector>
#include "Item.hpp"

class Snack : public Item {

    private:
    
        int price;
        int available;
        std::string measurment ;
        std::string name ; 

    public:
        static std::vector<std::string> names ; 
        Snack( std::string name ,int p , int a ,std::string me = "Package");
        //void buying () ; 
        std::string getInfo()const ;
        std::string get_name()const ; 
        int get_price() const; 
        int get_available()const ; 
    

};