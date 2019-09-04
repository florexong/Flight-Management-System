#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <fstream>
#include <time.h>
#include <cstdlib>
#include <iomanip>


using namespace std;
class logininterface
{
public:
	void CusRegister();
	void CusLogin();
	void login();
	void autoadmin();
	void ALogin();
};
class booking{
private:
int date;

public:
	void reserve();
	void pay();
	void cancel();
	void change();
	virtual string class_A()=0;
	void get_fligth_details();

};

class Economyclass{ //poly
private:
public:
	string class_A();
};

class Businessclass{ //poly
private:
public:
	string class_A();
};

class MilesAccount{
private:
public:
};

class Flight{
private:
public:
};

class Passenger{
private:
	string First_name;
	string Last_name;
	string title;
	int passport_num;
	int  milecard;


public:
	string get_Fname(){return First_name;}
	string get_Lname(){return Last_name;}
	string get_title(){return title;}
	int get_passportnum(){return passport_num;}
	void  set_info();
	bool check_passort();
	int get_milecard(){return milecard;}

};


class Airline{
public:
	string airletter = "MH";
	int generatenum();
	string code_airline();
	string get_airplane_name();
	int get_airplane_size(string airline_name);
};

class Airport{
private:
	string name;
	string code;
	string countryA;
	string countryD;
	double fee;

public:
    Airline plane;
    Airline *pln = &plane;
	string set_country();
    void set_pairNC();
    void set_countryA();
    void set_countryD();
	string get_countryA(){return countryA;}
	string get_countryD(){return countryD;}
	string get_name(){return name;}
	string get_code(){return code;}
	double get_fee(){return fee;}
	double get_totalmiles(string Dairport , string Aairport);
	void test(){std::cout<<name<<":"<<code;}



};


class Flight_Handling{
private:
public:
};

class App{
private:
public:
	void run();

};

//////////////////   Passenger ///////////////////////
void Passenger::set_info(){
	string First_name;
	string Last_name;
	string title;
	int passport_num;
	int passport_numf;
	vector<string> row;
    string line, word, temp;

	cout << "Welcome"<<endl;
	cout <<"Enter passport num"<<endl;
	cin >>passport_num;
}





///////////////////////  Airport ///////////////////////


double  Airport:: get_totalmiles(string Dairport , string Aairport){  // get total milies
	double num;
	if(Dairport == "Langkawi")
	{
		if(Aairport == "Kuala Lumpur")
		{
			num = 285.831;
			return num;
		}

		else if(Aairport == "Dubai")
		{
			num = 3203;
			return num;
		}
		else if(Aairport == "London")
		{
			num = 6284;
			return num;
		}
		else //Sarawak
		{
			num = 1293;
			return num;
		}
	}

		if(Dairport == "Kuala Lumpur")
	{
		if(Aairport == "Langkawi")
			{
			num = 285.831;
			return num;
			}

		else if(Aairport == "Dubai")
			{
			num = 3446;
			return num;
			}
		else if(Aairport == "London")
			{
			num = 6264;
			return num;
			}
		else
			{
			num = 830.1; //sarawak
			return num;
			}
	}

		if(Dairport == "Kuala Lumpur")
		{
		if(Aairport == "Langkawi")
			{
			num = 285.831;
			return num;
			}

		else if(Aairport == "Dubai")
			{
			num = 3446;
			return num;
			}
		else if(Aairport == "London")
			{
			num = 6264;
			return num;
			}
		else
			{
			num = 830.1; //sarawak
			return num;
			}
		}

		if(Dairport == "Dubai")
		{
		if(Aairport == "Langkawi")
			{
			num = 3203;
			return num;
			}

		else if(Aairport == "Kuala Lumpur")
			{
			num = 3446;
			return num;
			}
		else if(Aairport == "London")
			{
			num = 3417.33;
			return num;
			}
		else
			{
			num = 7805.15; //sarawak
			return num;
			}
		}


		if(Dairport == "Sarawak")
		{
		if(Aairport == "Langkawi")
			{
			num = 1293;
			return num;
			}

		else if(Aairport == "Kuala Lumpur")
			{
			num = 830.1;
			return num;
			}
		else if(Aairport == "Dubai")
			{
			num =7805.15;
			return num;
			}
		else
			{
			num = 7800; // london
			return num;
			}
		}



		if(Dairport == "London")
		{
		if(Aairport == "Langkawi")
			{
			num = 6284;
			return num;
			}

		else if(Aairport == "Kuala Lumpur")
			{
			num =  6264;
			return num;
			}
		else if(Aairport == "Dubai")
			{
			num =3417.33;
			return num;
			}
		else
			{
			num = 7800; // sarawak
			return num;
			}
		}

}

string Airport::set_country(){
	int num;
	string AirlineName[] = {"Langkawi", "Kuala Lumpur", "Dubai", "Sarawak", "London"};
	num = (rand()% 5);
	return AirlineName[num];
}



void  Airport::set_pairNC(){
	this->name = pln->get_airplane_name();
	this->code = pln->code_airline();
	this->countryD = set_country();
	this->countryA = set_country();
}

void Airport::set_countryA(){ // overwrite
	countryA = set_country();
}

void Airport::set_countryD(){//overwrite
	countryD = set_country();
}




//////////////////// Airline  //////////////////////////////////////////
int Airline::generatenum(){ // genarate number
	int num;
	num =(rand() % 9000) + 1000;
	return num;
}
string Airline::code_airline(){
	string strnum;
	string airlinecode;
	strnum = to_string(generatenum());
	airlinecode = airletter + strnum;
	return airlinecode;
}

string Airline::get_airplane_name(){ // generate name of airplane
	int num;
	string AirlineName[] = {"A220", "A320", "A330", "A350", "A380"};
	num = (rand()% 5);
	return AirlineName[num];
}

int Airline::get_airplane_size(string airline_name){  // give the plane size
	int size;
	if(airline_name == "A220"){
		size = 160;
		return size;
	}
	else if(airline_name == "A320"){
		size = 170;
		return size;
	}

	else if(airline_name == "A330")
	{
		size = 335;
		return size;
	}
	else if(airline_name == "A350")
	{
		size = 350;
		return size;
	}
	else
	{
		size = 860;
		return size;
	}

}

void App::run(){
	vector<Airport*> list1;

	Airport* air;
	for(int i=0;i<10;i++)
	{
        air = new Airport();


		air->set_pairNC();

		list1.push_back(air);
	}



	for(int i =0;i<10;i++)
	{
		if((list1[i]->get_countryA()) == (list1[i]->get_countryD()))
		{
			list1[i]->set_countryA();
			list1[i]->set_countryD();

		}
	}

	vector<Airport>::iterator it;
	for(auto it = list1.begin();it != list1.end(); ++it){
		cout <<"Airline Name :"<<(*it)->get_name()<<endl;
		cout <<"Airline code :"<<(*it)->get_code()<<endl;
		cout <<"Depature :"<<(*it)->get_countryD()<<endl;
		cout <<"Arrival  :"<<(*it)->get_countryA()<<endl;
		cout <<"------------------------\n";
	}
}

void CusRegister()
{
	bool a = false;
	string Passnum,Fname , Lname ,title ;
	string line,word,temp,test,temp1;
	fstream CusFile ;
	vector <string> row;
	CusFile.open("PassengerFile.csv",ios::app |ios::in |ios::out);


	while(!a)
	{
		cout <<"Please enter your passport number :";
		getline(cin,test);
		getline(cin,Passnum);
		while(getline(CusFile,line))
		{
			row.clear();
			stringstream s(line);
			while(getline(s,word,','))
			{
				row.push_back(word);
			}
			while(Passnum == row[0])
			{
				cout << "Passport Number already exist in the system !!! \n";
				cout << "Please Enter different passport number :";
				getline(cin,Passnum);
				CusFile.close();
				CusFile.open("PassengerFile.csv",ios::app |ios::in |ios::out);
			}
		}
		CusFile.close();
		CusFile.open("PassengerFile.csv",ios::app |ios::in |ios::out);
		cout << "Enter your surname :";
		cin >> Fname;
		cout << "Enter your last name :";
		getline(cin,test);
		getline(cin,Lname);
		cout << "Enter your title (Mr,Mrs,Dr,Sir and etc) :";
		cin >> title;
		CusFile << Passnum << "," <<Fname <<","<<Lname << ","<< title<<endl;
		CusFile.close();
		a = true ;

	}

}

void CusLogin()
{
	bool a = false;
	int count =0;
	string Passnum,Fname , Lname ,title, roll ;
	string line,word,temp,test,temp1;
	fstream CusFile ;
	vector <string> row;
	CusFile.open("PassengerFile.csv",ios::app |ios::in |ios::out);
	cout <<"Welcome please enter your passport number to check in :";
	getline(cin,test);
	getline(cin,Passnum);

	while(!a)
	{
		while(getline(CusFile,line))
		{
			row.clear();
			stringstream s(line);
			while(getline(s,word,','))
			{
				row.push_back(word);
			}

			roll = row[0];

			if (roll == Passnum)
			{
				count = 1 ;
				cout <<"Welcome back,"<< row[3] <<"."<< row[1] << row[2] << "Passport number :"<<row[0];
				a = true;
				CusFile.close();
			}

		}
		if (count == 0)
		{
			cout << "Info not found ."<<endl;
			cout << "Please enter the correct passport number:";
			getline(cin,Passnum);
		}
	}
}
void autoadmin()
{
	fstream CusFile ;
	string a = "Admin" , b = "Admin";
	CusFile.open("Admin.csv",ios::app |ios::in |ios::out);
	CusFile << a << "," << b <<endl;
	CusFile.close();

}

void ALogin()
{
	bool a = false;
	int count =0;
	string Username ,Password ;
	string line,word,temp,test,temp1,roll, roll1;
	fstream CusFile ;
	vector <string> row;
	CusFile.open("Admin.csv",ios::app |ios::in |ios::out);
	cout <<"Welcome to Admin login!\n";
	getline(cin,test);
	cout << "Username :";
	getline(cin,Username);
	cout << "Password :";
	getline(cin,Password);

	while(!a)
	{
		while(getline(CusFile,line))
		{
			row.clear();
			stringstream s(line);
			while(getline(s,word,','))
			{
				row.push_back(word);
			}

			roll = row[0];
			roll1 = row[1];

			if (roll == Username && roll1 == Password)
			{
				count = 1 ;
				cout <<"Welcome back";
				a = true;
				CusFile.close();
			}

		}
		if (count == 0)
		{
			cout << "Admin does not found ."<<endl;
			cout << "Please enter the correct info.\n";
			cout << "Username :";
			getline(cin,Username);
			cout << "Password :";
			getline(cin,Password);
		}
	}
}

void login()
{
	int choice;
	bool a = false;
	while (!a)
	{
		cout << "Welcome to flight management system. \n";
		cout << "Login as :\n";
		cout << "1)Existing User\n";
		cout << "2)New User \n";
		cout << "3)Admin \n";
		cout << "Choose 1 ,2 or 3 :";
		cin  >> choice ;

		if (choice == 1)
		{
			system("cls");
			CusLogin();
			a = true;
		}
		else if (choice == 2)
		{
			CusRegister();
		}
		else if (choice == 3)
		{
			ALogin();
			a = true;
		}
		else
		{
			cout<< "Invalid selection please choose only 1 , 2 or 3 .\n";

		}
	}

}
int main()
{
	double num;
	srand(time(NULL));
	login();
	// App a;
	// a.run();

	system("pause");




 return 0 ;

}



