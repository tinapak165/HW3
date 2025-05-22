#ifndef CURRENCY_HPP
#define CURRENCY_HPP
// این فایل فقط برای پیاده سازی کلاس های مشتق شدست
class Currency {
    public:
        virtual double to_usd() const = 0;
        virtual ~Currency() = default;
    };

#endif