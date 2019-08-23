#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <fstream>
#include <time.h>


using namespace std;

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
	// Airport a;

};

class Economyclass{ //poly
private:
public:
	string class_A();



};

class Businessclass{ //poly
private:
public:
	string class_A() ;
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

class Airport{
private:
	string name;
	string code;
	string country;
	double fee;
	// Airline air;

public:
	string set_country();
    void set_allvalue(string name,string code,double fee , string country);
	string get_country(){return country;}
	string get_name(){return name;}
	string get_code(){return code;}
	double get_fee(){return fee;}
	double get_totalmiles(string Dairport , string Aairport);
	double calculation(double nump);



};

class Airline{
public:
	string airletter = "MH";
	int generatenum();
	string code_airline();
	string get_airplane_name();
	int get_airplane_size(string airline_name);
};

class Flight_Handling{
private:
public:
};

//////////////////   Passanger ///////////////////////
void set_info(){
	bool a = false;
	string Passnum,Fname , Lname ,title ;
	string line,word,temp,test;
	fstream CusFile ;
	vector <string> row;

	while(!a)
	{
		CusFile.open("PassengerFile.csv",ios::app |ios::in |ios::out);
		cout <<"Please enter your passport number :";
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



///////////////////////  Airport ///////////////////////

double Airport::calculation(double nump){
	double price;
	price = nump * 0.25;
	return price;
}

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
		else
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


void  Airport::set_allvalue(string name,string code,double fee , string country){
	this->name = name;
	this->code = code;
	this->fee = fee;
	this->country = country;

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




int main()
{
	double num;
	srand(time(NULL));
	Airport a;
	num =a.get_totalmiles("Dubai","Langkawi");
	cout<<a.calculation(num)<< endl;
	set_info();




 return 0 ;

}




