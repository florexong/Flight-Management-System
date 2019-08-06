#include <iostream>
#include <istream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

// global vaarible;
int numpas=0;
class MilesAccount
{
public:
	int accnumber;
	int flightMiles;
	
};
class Booking
{
public:
	string date;
	bool passenger_class;
	void reserve ;
	void pay;
	void cancel;
	void change ;
	
};
class flight
{
public:
	string time;
	string date;
	int miles;
	
};
class airport
{
public:
	string name;
	string code;
	char country;
	int fee;
	
};
class airline
{
public:
	string name;
	string code;
	
};

class FlightHandling
{
public:
	string boardingGate;
	string delay_time;
	string date;
	string time;
	void startCheckIn;
	void checkInPassenger;
	void stopCheckIn;
	void closeFlight;
	void delayFlight;
	void passengerBoarding;
	void delay;	
};

class passenger{
private:
	int passno;
	string Fname;
	string Lname;
	string Title;
	vector<int> passportnum;
	vector<string> DataFN;
	vector<string> DataLN;
	vector<string> DataTT;
public:
	int p_num;


	void set_passengerinfo();//pasport
	void set_passno(){ passno = p_num;}
	int get_passno(){return passno;}
	bool check_element();
	void set_allinfo();//all info of passenger
	string get_Fname(){ return Fname;}
	string get_Lname(){ return Lname;}
	string get_Title(){ return Title;}
	vector<int>::iterator i;

};



class Main_System: public passenger{
private:
public:
	void display_main();


};


//########### passenger #######################


void passenger::set_allinfo(){
	this->Fname = Fname;
	this->Lname = Lname;
	this->Title = Title;
}

bool passenger::check_element()
{
	bool a;
	for(i= passportnum.begin();i != passportnum.end();i++)
	{
		if(*i == get_passno())
		{
			a =  false;
		}
		else{
			a=  true;

		}
	}
	return a;

}
void passenger::set_passengerinfo(){
    string over;
	cout<< " Welcome to Create Account\n";
	cout << "Enter Passport Number : ";
	cin >> p_num;
	set_passno();
	get_passno();
	if(!passportnum.empty())
	{
		if(check_element() == true)
		{
			passportnum.push_back(get_passno());
			getline(cin,over);
			cout << "Enter First Name : ";
			getline(cin, Fname);
			cout << endl;
			cout << "Enter Last Name : ";
			getline(cin, Lname);
			cout << endl;
			cout << "Enter Title  : ";
			getline(cin, Title);
			cout << endl;

			DataFN.push_back(get_Fname());
			DataLN.push_back(get_Lname());
			DataTT.push_back(get_Title());


		}
		else{
			cout<<"this Account Already Registered \n";

		}

	}
	else
	{
		passportnum.push_back(get_passno());
		getline(cin,over);
		cout << "Enter First Name : ";
		getline(cin, Fname);
		cout << endl;
		cout << "Enter Last Name : ";
		getline(cin, Lname);
		cout << endl;
		cout << "Enter Title  : ";
		getline(cin, Title);
		cout << endl;

		DataFN.push_back(get_Fname());
		DataLN.push_back(get_Lname());
		DataTT.push_back(get_Title());

	}
	// for(int i = 0;i < passportnum.size();i++)
	// {
	// 	cout<<passportnum[i]<<DataFN[i]<<DataLN[i]<<DataTT[i]<<"\n";
	// }
	

}

//################## Main_System ###########################
void Main_System::display_main()
{
	bool flag = true;
	int choice;

	while(flag)
	{
		cout<< "Welcome to Airline \n";
		cout<< "1. Create Account \n";
		cout<< "2. Exists Account \n";
		cin >> choice;
		if(choice == 1)
		{
			set_passengerinfo();

		}

	}

}



int main()
{
	Main_System main;
	main.display_main();

 return 0 ;

}

