#include "currency.hpp"
#include "IRR.hpp"


IRR::IRR(double v) : value(v) {}

double IRR::to_usd() const  { 
    return value / 10.0;
 }