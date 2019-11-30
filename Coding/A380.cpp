#include "A380.h"

A380::A380()
{
    //ctor
}

A380::~A380()
{
    //dtor
}

 int A380::set_totalseat(){
 	return 660;
 }

 int A380::set_totalFirst(){
 	return 110;
 }
 int A380::set_totalBusiness(){
 	return 250;
 }
 int A380::set_totalEconomy(){
 	return 300;

 }
 string A380::get_airline_name(){
 	return "A380";
 }
