#ifndef FIRSTCLASS_H
#define FIRSTCLASS_H
#include "Booking.h"


class Firstclass : public Booking
{
    public:
        Firstclass();
        virtual ~Firstclass();
        double calculate_price(double x);
        void update();
        string set_seat();


    protected:

    private:
};

#endif // FIRSTCLASS_H
