#include <iostream>
#include <string>
#include <fstream>
#include <time.h>


using namespace std;

class booking{
private:

public:
	void reserve();
	void pay();
	void cancel();
	void change();


};

class Economyclass{ //poly
private:
public:

};

class Businessclass{ //poly
private:
public:
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
public:
};

class Airport{
private:
	string name;
	string code;
	string country;

public:
	string set_country();
    void set_allvalue(string name,string code);
	string get_country(){return country;}
	string get_name(){return name;} 
	string get_code(){return code;} 
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


void  Airport::set_allvalue(string name,string code ){
	this->name = name;
	this->code = code;
	country = set_country();
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
	cout<<a.calculation(num);


	


 return 0 ;

}



