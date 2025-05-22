#include "currency.hpp"
class EUR : public Currency {

    public:

        EUR(double v);
        double to_usd() const override;

    private:
    
        double value;
};