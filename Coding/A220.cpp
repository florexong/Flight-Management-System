#include "A220.h"
#include "Airline.h"
A220::A220(){

}
A220::~A220(){

}
 int A220::set_totalseat(){
 	return 160;
 }

 int A220::set_totalFirst(){
 	return 30;
 }
 int A220::set_totalBusiness(){
 	return 30;
 }
 int A220::set_totalEconomy(){
 	return 100;

 }
 string A220::get_airline_name(){
 	return "A220";
 }
