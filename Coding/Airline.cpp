#include "Airline.h"

Airline::Airline(){

}
Airline::~Airline(){

}
Airline::Airline(const Airline&ft)
{
	this->name = ft.name;
	this->code = ft.code;
}
Airline::Airline(Airline && ft)
{
	this->name = ft.name;
	this->code = ft.code;
}


int Airline::generate_number(){
	int num;
	num =(rand() % 9000) + 1000;
	return num;
}

string Airline::getcode(){
    string strnum;
	string airlinecode;
	strnum = to_string(generate_number());
	airlinecode = "MH" + strnum;
	return airlinecode;

}
