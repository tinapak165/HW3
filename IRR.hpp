#include "currency.hpp"
class IRR : public Currency {

    public:

        IRR(double v);
        double to_usd() const override;

    private:
    
        double value;
};