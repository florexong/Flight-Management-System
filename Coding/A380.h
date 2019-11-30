#ifndef A380_H
#define A380_H
#include "Airline.h"
#include <iostream>
#include<string>
using namespace std;


class A380: public Airline
{
    public:
        A380();
        virtual ~A380();
        int  set_totalseat();
 		int  set_totalFirst();
 		int  set_totalBusiness();
 		int  set_totalEconomy();
 		string get_airline_name();

    protected:

    private:
};

#endif // A380_H
