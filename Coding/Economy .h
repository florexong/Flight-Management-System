#ifndef ECONOMY _H
#define ECONOMY _H

#include "Booking.h"
#include<sstream>
#include<iostream>
#include<vector>
#include<fstream>
#include<tuple>


class Economy  : public Booking
{
    public:
        Economy ();
        virtual ~Economy ();
        double calculate_price(double x);
        void update();
        string set_seat();

    protected:

    private:
};

#endif // ECONOMY _H
