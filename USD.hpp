#include "currency.hpp"
class USD : public Currency {

    public:

        USD(double v);
        double to_usd() const override;

    private:
    
        double value;
};