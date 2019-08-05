
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

class Passanger{
private:
	int passno;
	string Fname;
	string Lname;
	vector<int> passportnum;
public:
	int p_num;
	void set_passangerinfo();
	void set_passno(){ passno = p_num;}
	int get_passno(){return passno;}
	 vector<int>::iterator i;
};



class Main_System: public Passanger{
private:
public:
	void display_main();

};


//################# Passanger ############################
void Passanger::set_passangerinfo(){
	cout<< " Welcome to Create Account\n";
	cout << "Enter Passport Number : ";
	cin >> p_num;
	set_passno();
	get_passno();
	if(!passportnum.empty())
	{
		for(i=passportnum.begin(); i != passportnum.end();++i)
		{
			if(*i == get_passno()){
				cout<<"The User is Exists ! \n";
			}
			else{
				cout<<"this new";
				numpas++;
				passportnum.push_back(get_passno());
				cout<<numpas;
				break;
			}
		}
	}
	else
	{
		passportnum.push_back(get_passno());

	}
	
}

