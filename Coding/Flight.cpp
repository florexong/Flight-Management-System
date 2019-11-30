#include "Flight.h"

Flight::Flight()
{
    //ctor
}

Flight::~Flight()
{
    //dtor
}

Flight::Flight(const Flight& other)
{
    //copy ctor
}

Flight& Flight::operator=(const Flight& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

int Flight::get_total_seat()
{
    return total_seat;
}
int Flight::get_First_class()
{
   return First_class;
}
int Flight::get_Business_class()
{
        return Business_class;
}
int Flight::get_Economy_class()
{
    return Economy_class;
}
string Flight::get_Airline_code()
{
    return Airline_code;
}
string Flight::get_Arive()
{
    return Arrive;
}
string Flight::get_Departure()
{
    return Departure;
}
void Flight::set_total_seat(int total_seat)
{
        this->total_seat = total_seat;
}
void Flight::set_First_class(int First_class)
{
    this->First_class = First_class;
}
void Flight::set_Business_class(int Business_class)
{
    this->Business_class = Business_class;
}
void Flight::set_Economy_class(int Economy_class)
{
    this->Economy_class = Economy_class;
}
void Flight::set_Arrival(string Arrive)
{
    this->Arrive = Arrive;

}
void Flight::set_Departure(string Departure)
{
    this->Departure = Departure;
}
void Flight::set_Airline_code(string Airline_code)
{
    this->Airline_code  = Airline_code;
}

void Flight::Flight_Vector()
{

}
