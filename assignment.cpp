
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


class Booking{

};



class Passanger{
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
	int  passnum;
	int num;// counter for passanger
	Passanger()= default;

	void set_passangerinfo();//pasport
	void set_passno(){ passno = p_num;}
	int get_passno(){return passno;}
	bool check_element();
	void set_allinfo();//all info of passanger
	string get_Fname(){ return Fname;}
	string get_Lname(){ return Lname;}
	string get_Title(){ return Title;}
	void display_passangerinfo();
	int get_elenum();

	 vector<int>::iterator i;

};

class MilesAccount{
private:
public:

};

class Airline
{
public:
	Airline()= default;
	string airline_name();
	string airline_code();

};

class Fligh{
private:
public:

};

class Airport{
private:
public:
	string set_country();
};

class Fligth_Handling{
private:
public:
};

class Main_System: public Passanger , public Airline{
private:
public:
	void display_main();

};


//########### Passanger #######################



void Passanger::display_passangerinfo(){


	cout << " Please Enter Your Pssport Number : \n";
	cin >> passnum;
	num = get_elenum();
	system("cls");
	cout <<"Welcome "<<DataTT[num]<<"."<<DataFN[num]<<" "<<DataLN[num]<<"\n";
}


int Passanger::get_elenum(){
	for (int i = 0; i < passportnum.size(); ++i)
	{
		if(passportnum[i] == passnum)
		{
			return i;
		}

	}
}



void Passanger::set_allinfo(){
	this->Fname = Fname;
	this->Lname = Lname;
	this->Title = Title;
}


bool Passanger::check_element()
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
void Passanger::set_passangerinfo(){
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


//########################## Airline ###########################
string  Airline::airline_name(){
	int num;
	string AirlineName[] = {"A220", "A320", "A330", "A350", "A380"};
	num = (rand()% 5);
	return AirlineName[num];

}

string Airline:: airline_code(){

	int num;
	string Airlinecode[] = {"AK6301", "AK7802", "AK5023", "Ak3054", "AK2001"};
	num = (rand()%5);
	return Airlinecode[num];
}



//#################### Airport #############################
string Airport::set_country(){
	int num;
	string country[] = {"Malaysia", "England", "Indonesia", "Australia", "Japan"}
}


//################## Main_System ###########################
void Main_System::display_main(){
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
			set_passangerinfo();

		}
		if(choice == 2)
		{
			display_passangerinfo();
			cout << airline_name();
			cout << airline_code();

		}


	}


}




int main()
{
    srand(time(NULL));
	Main_System main;
	main.display_main();





 return 0 ;

}

