#include "Airport.h"

Airport::Airport()
{
    //ctor
}

Airport::~Airport()
{
    //dtor
}
string Airport::generate_place(){
	int num;
	string AirlineName[] = {"Langkawi", "KualaLumpur", "Dubai", "Sarawak", "London"};
	num = (rand()% 5);
	return AirlineName[num];
}

void Airport::set_Arive_Airport(string Aairport){
    Arive_Airport = Aairport;
}

void Airport::set_Departure_Airport(string Dairport){
    Departure_Airport = Dairport;
}

string Airport::get_Arive_Airport(){
    return Arive_Airport;
}

string Airport::get_Departure_Airport(){
    return Departure_Airport;
}

string Airport::Airline_code()
{
        return A_code;
}
string Airport::Airline_name()
{
    return A_name;
}void Airport_vector();
int Airport::Airline_Total_seat()
{
    return Total_seat;
}
int Airport::Airline_Total_First(){
        return Total_F;

}
int Airport::Airline_Total_Business(){
    return Total_B;
}
int Airport::Airline_Total_Economy(){
    return Total_E;
}

 void Airport::check_same_placeset(set<Airport>&Ap){
 for(auto i : Ap)
 {
    while (i.get_Arive_Airport() == i.get_Departure_Airport())
    {
    int num;
	string AirlineName[] = {"Langkawi", "KualaLumpur", "Dubai", "Sarawak", "London"};
	num = (rand()% 5);
	i.set_Arive_Airport(AirlineName[num]);
	num = (rand()% 5);
	i.set_Departure_Airport(AirlineName[num]);
    }

 }

 }


void Airport::set_values()
{
    int num;
    num = (rand()% 4)+1;

    if(num == 1){
        Airline *air = new A220();
         A_code = air->getcode();
         A_name = air->get_airline_name();
         Total_seat = air->set_totalseat() ;
         Total_F = air->set_totalFirst();
         Total_E = air->set_totalEconomy();
         Total_B = air->set_totalBusiness();
         Departure_Airport = generate_place();
         Arive_Airport = generate_place();



    }
    else if (num == 2){
         Airline *air = new A330();
         A_code = air->getcode();
         A_name = air->get_airline_name();
         Total_seat = air->set_totalseat() ;
         Total_F = air->set_totalFirst();
         Total_E = air->set_totalEconomy();
         Total_B = air->set_totalBusiness();
         Departure_Airport = generate_place();
         Arive_Airport = generate_place();
    }
    else if(num == 3){
         Airline *air = new A350();
         A_code = air->getcode();
         A_name = air->get_airline_name();
         Total_seat = air->set_totalseat() ;
         Total_F = air->set_totalFirst();
         Total_E = air->set_totalEconomy();
         Total_B = air->set_totalBusiness();
         Departure_Airport = generate_place();
         Arive_Airport = generate_place();
    }
    else{
         Airline *air = new A380();
         A_code = air->getcode();
         A_name = air->get_airline_name();
         Total_seat = air->set_totalseat();
         Total_F = air->set_totalFirst();
         Total_E = air->set_totalEconomy();
         Total_B = air->set_totalBusiness();
         Departure_Airport = generate_place();
         Arive_Airport = generate_place();

    }
}

void Airport::Airport_set()
{

fstream infile;
infile.open("Flight.txt",ios::app|ios::in|ios::out );
string str,word;
Airport air;
vector<string> row;
while(getline(infile,str))
{
    row.clear();
    stringstream s(str);
    while(getline(s,word,' '))
    {
        row.push_back(word);
    }
    for(int i = 0 ; i < row.size();i++)
    {
        cout <<row[i]<< " ";
    }
    cout<<endl;
}
    infile.close();

}







