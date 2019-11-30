#ifndef A220_H
#define A220_H
#include "Airline.h"
#include <iostream>
#include<string>
using namespace std;

class A220: public Airline
{
    public:
        A220();
        ~A220();
 		int  set_totalseat();
 		int  set_totalFirst();
 		int  set_totalBusiness();
 		int  set_totalEconomy();
 		string get_airline_name();

    protected:

    private:
};

#endif // A220_H
