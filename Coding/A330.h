#ifndef A330_H
#define A330_H
#include "Airline.h"
#include <iostream>
#include<string>
using namespace std;

class A330: public Airline
{
    public:
        A330();
        virtual ~A330();
        int  set_totalseat();
 		int  set_totalFirst();
 		int  set_totalBusiness();
 		int  set_totalEconomy();
 		string get_airline_name();

    protected:

    private:
};

#endif // A330_H
