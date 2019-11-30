#include "Bookinginfo.h"

Bookinginfo::Bookinginfo()
{
    //ctor
}

Bookinginfo::~Bookinginfo()
{
    //dtor
}

void Bookinginfo::set_hour(int x)
{
    this->hour = x;
}

void Bookinginfo::set_minute(int x)
{
    this->minute;
}
void Bookinginfo::set_date(string x)
{
    this->date = x;
}

int Bookinginfo::get_hour()
{
    return hour;
}
int Bookinginfo::get_minute()
{
    return  minute;
}

string Bookinginfo::get_date()
{
    return date;
}
void Bookinginfo::set_price(double x)
{
    x = x* 0.25;
    this->price = x;
}
double Bookinginfo::get_price()
{
    return price;
}
void Bookinginfo::set_distance(double x){
    this->distance = x;
}
double Bookinginfo::get_distance(){
    return distance;
}

  void Bookinginfo::set_a(double x){
    this->price = x;
  }





