#include "A350.h"

A350::A350()
{
    //ctor
}

A350::~A350()
{
    //dtor
}
 int A350::set_totalseat(){
 	return 350;
 }

 int A350::set_totalFirst(){
 	return 75;
 }
 int A350::set_totalBusiness(){
 	return 75;
 }
 int A350::set_totalEconomy(){
 	return 200;
 }
 string A350::get_airline_name(){
 	return "A350";
 }
