#ifndef BOOKING_H
#define BOOKING_H
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <tuple>
#include<string>
#include<sstream>
using namespace std;

class Booking
{
    public:
        Booking();
        virtual ~Booking();
        reserve();
        change(int choice);
        pay();
        cancel();
        virtual double calculate_price(double x)=0;
        virtual void update()=0;
        virtual string set_seat()=0;
    protected:

    private:


};

#endif // BOOKING_H
