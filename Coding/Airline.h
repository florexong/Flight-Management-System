#ifndef AIRLINE_H
#define AIRLINE_H
#include <iostream>
#include <string>
using namespace std;

class Airline
{
    public:
        Airline();
        ~Airline();
        Airline(const Airline&ft);
        Airline(Airline &&ft);
        int generate_number();
        string getcode();


        virtual int set_totalseat()=0;
        virtual int set_totalFirst()=0;
        virtual int set_totalBusiness()=0;
        virtual int set_totalEconomy()=0;
        virtual string get_airline_name()=0;

    protected:

    private:
        string name;
        string code;
};

#endif // AIRLINE_H
