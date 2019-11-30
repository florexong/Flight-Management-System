#ifndef APP_H
#define APP_H
#include"Airline.h"
#include"A220.h"
#include"A330.h"
#include"A350.h"
#include "A380.h"
#include"Airport.h"
#include "Passanger.h"
#include "Flight.h"
#include "Bookinginfo.h"
#include "Booking.h"
#include "Economy .h"
#include "Businessclass.h"
#include "Firstclass.h"
#include <set>
#include <iostream>
#include <string>
#include<time.h>
#include<fstream>
#include <exception>
#include <list>
#include <tuple>

using namespace std;
// normal function
int  welcome();
int  PassengerMenu();

class App
{
    public:
        App();
        virtual ~App();
        void run();




    protected:

    private:
    set<Airport> Ap;
    vector<Passanger>Pinfo;
    vector<Flight>Finfo;
    double calculate_distance(string Dairport , string Aairport);

    Airport air;
    Passanger pp;
    Flight ft;
    Bookinginfo binfo;
    Booking *btr;
};

#endif // APP_H
