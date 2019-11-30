#ifndef AIRPORT_H
#define AIRPORT_H
#include"Airline.h"
#include"A220.h"
#include"A330.h"
#include"A350.h"
#include "A380.h"
#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <fstream>
#include <time.h>
#include <sstream>
using namespace std;

class Airport
{
    public:
        Airport();
        virtual ~Airport();
        bool operator<(const Airport& right) const // this is for set
        {
            bool status = false;
            string rightstr = right.A_code + right.Arive_Airport +right.Departure_Airport;
            string leftstr = this->A_code + this->Arive_Airport + this->Departure_Airport;
            if(leftstr < rightstr && leftstr != rightstr){
                status = true;
            }
            return status;
        }

        void set_Arive_Airport(string Aairport);
        void set_Departure_Airport(string Dairport);
        void set_values();
        string get_Arive_Airport();
        string get_Departure_Airport();
        string Airline_code();
        string Airline_name();
        string generate_place();
        int Airline_Total_seat();
        int Airline_Total_First();
        int Airline_Total_Business();
        int Airline_Total_Economy();
        void check_same_placeset(set<Airport>&Ap);
        void update_seat();
        void Airport_vector();
        void Airport_set();




    protected:


    private:
        vector<Airport>Finfo;
        string Arive_Airport;
        string Departure_Airport;
        string A_name;
        string A_code;
        int Total_seat;
        int Total_F;
        int Total_E;
        int Total_B;


};

#endif // AIRPORT_H
