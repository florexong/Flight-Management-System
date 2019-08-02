#include <iostream>
using namespace std ;

class Passenger
{
public:
	string p_name , passport_No ;
	int m_card ;

	void creditMile() ;
	void consumeMiles();
	void cancelMiles();

};

class MilesAccount
{
public:
	int p_accnum ; f_miles;

};

class Booking
{
public:
	int date ;
	char tier ;

	void reserve();
	void pay();
	void cancel();
	void change();

};

class Flight
{
public:
	int time , date, miles ;
};


