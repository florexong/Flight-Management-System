#ifndef A350_H
#define A350_H
#include "Airline.h"
#include <iostream>
#include<string>
using namespace std;

class A350: public Airline
{
    public:
        A350();
        virtual ~A350();
        int  set_totalseat();
 		int  set_totalFirst();
 		int  set_totalBusiness();
 		int  set_totalEconomy();
 		string get_airline_name();

    protected:

    private:
};

#endif // A350_H
