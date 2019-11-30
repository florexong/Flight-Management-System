#ifndef BUSINESSCLASS_H
#define BUSINESSCLASS_H

#include "Booking.h"


class Businessclass : public Booking
{
    public:
        Businessclass();
        virtual ~Businessclass();
        double calculate_price(double x);
        void update();
        string set_seat();

    protected:

    private:
};

#endif // BUSINESSCLASS_H
