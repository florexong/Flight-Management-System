#ifndef PASSANGER_H
#define PASSANGER_H
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <tuple>
#include <sstream>
using namespace std;
class Passanger
{
    public:
        Passanger();
        virtual ~Passanger();
        void  set_First_Name(string First_Name);
        void  set_Last_Name(string Last_Name);
        void  set_Title(string Title);
        void  set_Milecard(string Milecard);
        void  set_Passport_Number(int Passport_number);
        void set_miles(int Miles);
        string  get_First_Name();
        string  get_Last_Name();
        string  get_Title();
        string  get_Milecard();
        int get_Passport_Number();
        int get_miles();
        void Passenger_File();
        void Passenger_vector();
        bool check_passportnum(int x);
        bool check_cardnumber(string  x);
        void set_login_info(int num);
        double accumulate_distance(double a);
        void update_vector(int num,double distance);


    protected:

    private:
        string First_Name;
        string Last_Name;
        string Title;
        string Milecard;
        int Passport_number;
        int total_Miles = 0;
        vector<tuple<int,string,string,string,string,int>>info;
};

#endif // PASSANGER_H
