#include "currency.hpp"
#include "EUR.hpp"


EUR::EUR(double v) : value(v) {}

double EUR::to_usd() const  { 
    return value * 2;
 }