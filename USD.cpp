#include "currency.hpp"
#include "USD.hpp"

USD::USD(double v) : value(v) {}
// same as get functions
double USD::to_usd() const  { 
    return value;
 }