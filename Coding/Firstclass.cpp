#include "Firstclass.h"

Firstclass::Firstclass()
{
    //ctor
}

Firstclass::~Firstclass()
{
    //dtor
}
double Firstclass::calculate_price(double x)
{
    return (x*0.30);
}
string Firstclass::set_seat()
{
    return "Firstclass";
}

void Firstclass::update()
{
vector<tuple<string, string, int , int , int , int, string , string , double>>up;
ifstream infile;
infile.open("Flight.txt");
string str;
up.clear();
while(getline(infile,str))
    {
        stringstream sb;
        sb<<str;
        string code ; string Acode; int ad ; int b ; int c; int d; string ab; string ac; double abc;
        sb>>code;sb>>Acode;sb>>ad;sb>>b;sb>>c;sb>>d;sb>>ab;sb>>ac;sb>>abc;
        up.push_back(tie(code,Acode,ad=ad-1,b=b-1,c,d,ab,ac,abc));

    }


ofstream outfile;
outfile.open("Flight.txt");
for(auto i:up)
{
  outfile<<get<0>(i)<<" " <<get<1>(i)<<" " <<get<2>(i)<<" " <<get<3>(i)<<" " <<get<4>(i)<<" " <<get<5>(i)<<" " <<get<6>(i)<<" " <<get<7>(i)<<" " <<get<8>(i)<<endl;
}

}
