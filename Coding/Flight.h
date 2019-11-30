#ifndef FLIGHT_H
#define FLIGHT_H
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <tuple>
using namespace std;
class Flight
{
    public:
        Flight();
        virtual ~Flight();
        Flight(const Flight& other);
        Flight& operator=(const Flight& other);
        int get_total_seat();
        int get_First_class();
        int get_Business_class();
        int get_Economy_class();
        string get_Airline_code();
        string get_Arive();
        string get_Departure();
        void set_total_seat(int total_seat);
        void set_First_class(int First_class);
        void set_Business_class(int Business_class);
        void set_Economy_class(int Economy_class);
        void set_Arrival(string Arrive);
        void set_Departure(string Departure);
        void set_Airline_code(string Airline_code);
        void Flight_Vector();

    protected:

    private:
        int total_seat;
        int First_class;
        int Business_class;
        int Economy_class;
        string Airline_code;
        string Arrive;
        string Departure;

};

#endif // FLIGHT_H
