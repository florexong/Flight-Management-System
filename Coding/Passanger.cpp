#include "Passanger.h"

Passanger::Passanger()
{
    //ctor
}

Passanger::~Passanger()
{
    //dtor
}

void  Passanger::set_First_Name(string First_Name)
{
    this->First_Name = First_Name;

}
void  Passanger::set_Last_Name(string Last_Name)
{
    this->Last_Name = Last_Name;
}

void  Passanger::set_Title(string Title)
{
    this->Title = Title;

}
void  Passanger::set_Milecard(string Milecard)
{
    this->Milecard = Milecard;
}
void  Passanger::set_Passport_Number(int Passport_number)
{
    this->Passport_number = Passport_number;
}
string  Passanger::get_First_Name()
{
    return First_Name;

}
string  Passanger::get_Last_Name()
{
    return Last_Name;
}
string  Passanger::get_Title()
{
    return Title;
}
string  Passanger::get_Milecard()
{
    return  Milecard;
}
int Passanger::get_Passport_Number()
{
    return Passport_number;
}
void Passanger::set_miles(int Miles)
{
    this->total_Miles = Miles;
}

int Passanger::get_miles()
{
    return total_Miles;
}

void Passanger::Passenger_File(){
    ofstream  infile;
    try{
        infile.open("PassengerInfo.txt",std::ios_base::app);
        if(!infile.is_open())
            throw "File is not created";
        }
    catch(string r)
    {
            cout << r <<endl;
    }
    infile<< get_Passport_Number()<<" "<<get_First_Name()<<" "<<get_Last_Name()<<" "<<get_Title()<<" "<<get_Milecard()<<" "<<get_miles()<<endl;
    infile.close();



}

void Passanger::Passenger_vector(){
ifstream infile;
infile.open("PassengerInfo.txt");
string str;
info.clear();
while(getline(infile,str))
    {
        stringstream sb;
        sb<<str;
        int passnum,distance;
        string Fname,Lname,title,milecard;
        sb>>passnum;sb>>Fname;sb>>Lname;sb>>title;sb>>milecard;sb>>distance;
        info.push_back(tie(passnum,Fname,Lname,title,milecard,distance));

    }
infile.close();

}

bool Passanger::check_passportnum(int x){
    for(auto i :info){
        if(get<0>(i) == x)
        {
            return true;
        }
    }
    return false;
}

bool Passanger::check_cardnumber(string x){
    for(auto i :info){
        if(get<4>(i) == x)
        {
            return true;
        }
    }
    return false;
}

 void Passanger::set_login_info(int num){
  Passenger_vector();
  for(auto i : info)
  {
      if(get<0>(i) == num)
      {
          set_Passport_Number(num);
          set_First_Name(get<1>(i));
          set_Last_Name(get<2>(i));
          set_Title(get<3>(i));
          set_Milecard(get<4>(i));
          set_miles(get<5>(i));

      }

  }

 }

 double Passanger::accumulate_distance(double a){
  this->total_Miles = 0 + a;
  return total_Miles;
 }

 void Passanger::update_vector(int num,double distance){
fstream updatefile;
updatefile.open("PassengerInfo.txt" ,ios::in|ios::out);
 Passenger_vector();
 for(auto i:info)
 {
     cout<<num<<endl;
     if(get<0>(i) == num )
     {
         get<5>(i) = get<5>(i) + distance;
     }
     updatefile << get<0>(i)<<"  "<<get<1>(i)<<"  "<< get<2>(i)<<"  "<<get<3>(i)<<"  "<< get<4>(i)<<"  "<<get<5>(i)<<endl;
 }
 updatefile.close();

 }



