#ifndef BOOKINGINFO_H
#define BOOKINGINFO_H
#include <iostream>
#include <string>
using namespace std;


class Bookinginfo
{
    public:
        Bookinginfo();
        virtual ~Bookinginfo();
        void set_hour(int x);
        void set_minute(int x);
        void set_date(string x);
        void set_a(double x);

        void set_distance(double x);
        int get_hour();
        int get_minute();

        string get_date();
        void set_price(double x);
        double get_price();
        double get_distance();


    protected:

    private:
        int hour;
        int minute;
        string date;
        double price;
        double distance;
};

#endif // BOOKINGINFO_H
