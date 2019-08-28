#include <iostream>
#include <string>
#include <fstream>
#include <time.h>
#include <vector>


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

//////////////////   Passanger ///////////////////////
void set_info(){
	string First_name;
	string Last_name;
	string title;
	int passport_num;

	cout << "Welcome"<<endl;
	cout <<"Enter passport num"<<endl;
	cin >>passport_num;
	// checking for new or old user ....
	// if new get name then display option
	//esle display option


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



void  Airport::set_pairNC(){
	this->name = pln->get_airplane_name();
	this->code = pln->code_airline();
	this->countryD = set_country();
	this->countryA = set_country();
}

void Airport::set_countryA(){
	countryA = set_country();
}

void Airport::set_countryD(){
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




int main()
{
	double num;
	srand(time(NULL));
	vector<Airport*> list1;

	Airport* air;
	for(int i=0;i<10;i++)
	{
		air = new Airport();
		air->set_pairNC();
		list1.push_back(air);
	}


	
	// for(int i =0;i<10;i++)
	// {
	// 	if(list1[i]->get_countryA == list1[i]->get_countryD)
	// 	{
	// 		list1[i]->set_countryA();
	// 		list1[i]->set_countryD();

	// 	}
	// }

	vector<Airport>::iterator it;
	for(auto it = list1.begin();it != list1.end(); ++it){
		cout <<"Airline Name :"<<(*it)->get_name()<<endl;
		cout <<"Airline code :"<<(*it)->get_code()<<endl;
		cout <<"Depature :"<<(*it)->get_countryD()<<endl;
		cout <<"Arrival  :"<<(*it)->get_countryA()<<endl;
		cout <<"------------------------\n";
	}





 return 0 ;

}



