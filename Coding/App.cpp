#include "App.h"

App::App()
{

    //fstream write("Flight.txt",ios::app|ios::in|ios::out );
    //fstream readfile;
    ifstream readfile;
    readfile.open("Flight.txt");
	if(!readfile)
	{
        for(int i = 0 ; i < 10 ;i++)
        {
            air.set_values();
            Ap.insert(air);

        }
        readfile.close();
	    cout << "create folder and generate"<<endl;
		fstream outfile;
		outfile.open("Flight.txt",ios::app|ios::in|ios::out );
        for(auto i : Ap){
        air.check_same_placeset(Ap);
        outfile<<i.Airline_code()<<" ";
        outfile<<i.Airline_name()<<" ";
        outfile<<i.Airline_Total_seat()<<" ";
        outfile<<i.Airline_Total_First()<<" ";
        outfile<<i.Airline_Total_Business()<<" ";
        outfile<<i.Airline_Total_Economy()<<" ";
        outfile<<i.get_Departure_Airport()<<" ";
        outfile<<i.get_Arive_Airport()<<" ";
        outfile<<calculate_distance(i.get_Departure_Airport(),i.get_Arive_Airport())<<endl;
        }
        outfile.close();
	}

}

App::~App()
{
    //dtor
}

void App::run(){
    bool flag =true;
    int num;
    int passnum;
    string FistN;
    string LastN;
    string T;
    string cardnum;
    while(flag){
     num = welcome();
     if(num == 1)
        {
            cout<<"Enter Passport Number : ";
            cin >> passnum;
            pp.Passenger_vector();
            if(pp.check_passportnum(passnum))
                {
                    cout<<"This user is Exist"<<endl;
                }

            else
                {
                    bool flag1= true;
                    cout<<endl;
                    pp.set_Passport_Number(passnum);
                    cout<<"Enter First Name : ";
                    getline(cin,FistN);
                    getline(cin,FistN);
                    cout<<endl;
                    pp.set_First_Name(FistN);
                    cout<<"Enter Last Name : ";
                    getline(cin,LastN);
                    cout<<endl;
                    pp.set_Last_Name(LastN);
                    cout<<"Enter Title :  ";
                    cin >> T;
                    cout<<endl;
                        pp.set_Title(T);
                    cout<<"Enter MileCard(8-digit) :";
                    cin >> cardnum;
                    while(flag1){
                                if(cardnum.length() == 8 && !pp.check_cardnumber(cardnum)){
                                    flag1 = false;
                                }
                                else{
                                        cout<<"Incomplete card number !!!"<<endl;
                                        cout<<"Enter 8 - digit card number : ";
                                        cin >> cardnum;
                                }

                        }
                    pp.set_Milecard(cardnum);
                    cout<<endl;
                    pp.Passenger_File();
                   // pp.Passenger_vector();
                    cout<<"The Process is Completed"<<endl;
                }
        }
        else if(num == 2)
            {
            bool flag = true;
            int num;
            int numa;
            bool a =false;
            string code;
            string aircode;
            int hour;
            int minute;
            string date;
            string seat;
            pp.Passenger_vector();
            cout <<"Welcome User Page"<<endl;
            cout << "Enter Passport number"<<endl;
            cin >> num;
            if(pp.check_passportnum(num))
                {
                    pp.set_login_info(num);
                    Pinfo.push_back(pp);
                    cout<<"Welcome "<<pp.get_Title()<<". "<<pp.get_First_Name()<<" "<<pp.get_Last_Name()<<endl;
                    cout<<pp.get_Milecard()<<endl;
                    cout<<pp.get_miles()<<endl;
                    while(flag)
                    {

                        numa =PassengerMenu();
                        if(numa == 1)
                        {

                            fstream infile;
                            infile.open("Flight.txt",ios::app|ios::in|ios::out );
                            string str,word;
                            double distance;
                            Airport air;
                            vector<string> row;

                            while(getline(infile,str))
                            {
                                row.clear();
                                stringstream s(str);
                                while(getline(s,word,' '))
                                {
                                    row.push_back(word);
                                }
                                if(row[2] != "0")
                                {
                                    for(int i = 0 ; i < row.size();i++)
                                    {
                                        cout <<row[i]<< " ";
                                    }
                                    cout<<endl;

                                }

                                }
                                infile.close();
                                int count = 0;
                                cout<<"Enter Airline Code";
                                cin >> code;
                                infile.open("Flight.txt",ios::app|ios::in|ios::out );
                                while(!a)
                                {
                                    while(getline(infile,str))
                                    {
                                        row.clear();
                                        stringstream s(str);
                                        stringstream sb(str);
                                        string code ; string Acode; int ad ; int b ; int c; int d; string ab; string ac; double abc;
                                        sb >>code ;sb >> Acode ;sb >>ad ; sb >>b ;sb >> c;sb>> d ; sb>> ab ; sb >>ac ; sb >>abc;
                                        while(getline(s,word,' '))
                                        {

                                            row.push_back(word);
                                        }

                                        if(code == row[0])
                                        {
                                            distance = abc;
                                            count = 1;
                                            a = true;

                                            infile.close();

                                        }



                                    }

                                    if(count == 0)
                                    {
                                        cout<<"The flight number is wrong please reenter again.";
                                        cin >> code;
                                        infile.close();
                                        infile.open("Flight.txt",ios::app|ios::in|ios::out );

                                    }


                                }
                                cout<<"Enter Time(24 Hour format)(hour) : ";
                                cin>> hour;

                                cout<<"Enter Time(24 Hour format)(minutes) :";
                                cin >> minute;

                                cout<<"Enter Date (YYYY/MM/DD) :";
                                cin >> date;

                                cout<< "Enter which class(Economy,First,Business) : ";
                                cin >> seat;
                                binfo.set_hour(hour);
                                binfo.set_minute(minute);
                                binfo.set_date(date);
                                binfo.set_distance(distance);
                                cout<<binfo.get_distance()<<endl;
                                binfo.set_price(distance);
                                bool b = false;
                                double p;
                                double d;
                                while(!b){
                                    if(seat == "Economy"){

                                            Booking *bt = new Economy();
                                            p = binfo.get_price();
                                            p =bt->calculate_price(p);

                                            seat = bt-> set_seat();
                                            d = pp.accumulate_distance(binfo.get_distance());
                                             pp.update_vector(num,d);
                                             bt->update();
                                            b = true;
                                            delete bt;
                                    }
                                    else if(seat == "Business"){
                                            Booking *bt = new Businessclass();
                                            p =bt->calculate_price(binfo.get_price());
                                            seat = bt -> set_seat();
                                            d = pp.accumulate_distance(binfo.get_distance());
                                            pp.update_vector(num,d);
                                            bt->update();
                                            b = true;
                                            delete bt;
                                    }
                                    else if(seat == "Firstclass" ){
                                             Booking *bt = new Firstclass();
                                            p =bt->calculate_price(binfo.get_price());
                                            seat = bt -> set_seat();
                                            d = pp.accumulate_distance(binfo.get_distance());
                                            pp.update_vector(num,d);
                                            bt->update();
                                            b = true;
                                            delete bt;
                                    }
                                    else{
                                            cout<<"Invalid Input"<<endl;
                                    }
                                }
                                    int paid=0;
                                    fstream write;
                                    write.open("Booking.txt",ios::app|ios::in|ios::out);
                                    {
                                        write<<num<<" "<<p<<" "<<hour<<" "<<minute<<" "<<date<<" "<<seat<<" "<< paid<<endl;

                                    }
                                    write.close();
                                    cout<<"The Boooking is completed"<<endl;

                        }


                        if(numa == 2)
                        {

                            int z;
                            cout<<" Welcome to Change info "<<endl;
                            cout <<"[1] change date." <<endl;
                            cout << "[2] change time."<<endl;
                            cin >> z;
                            vector<tuple<int ,int,int,int,string,string ,int>>bk;
                            string date;
                            int hrN;
                            int minN;
                            if(z == 1)
                            {
                                cout << "Enter New Date :"<<endl;
                                cin >> date;
                                ifstream infile;

                                infile.open("Booking.txt");
                                string str;
                                bk.clear();
                                while(getline(infile,str))
                                {
                                    stringstream sb;
                                    sb<<str;
                                    int passnum,price,hour,minute,paid;
                                    string dateo,seat;
                                    sb>>passnum;sb>>price;sb>>hour;sb>>minute;sb>>dateo;sb>>seat;sb>>paid;
                                    bk.push_back(tie(passnum,price,hour,minute,date,seat,paid));
                                }
                                infile.close();
                                fstream updatefile;
                                updatefile.open("Booking.txt");
                                for(auto i : bk)
                                {
                                    updatefile<<get<0>(i)<<" "<<get<1>(i)<<" "<<get<2>(i)<<" "<<get<3>(i)<<" "<<get<4>(i)<<" "<<get<5>(i)<<endl;
                                }
                                updatefile.close();

                            }
                            else if(z == 2){
                                cout << "Enter New Time(24hrs System)(Hour only) :"<<endl;
                                cin >> hrN;
                                cout << "Enter New Time(24hrs System)(Minutes only) :"<<endl;
                                cin >> minN;


                                ifstream infile;

                                infile.open("Booking.txt");
                                string str;
                                bk.clear();
                                while(getline(infile,str))
                                {
                                    stringstream sb;
                                    sb<<str;
                                    int passnum,price,hour,minute,paid;
                                    string dateo,seat;
                                    sb>>passnum;sb>>price;sb>>hrN;sb>>minN;sb>>dateo;sb>>seat;sb>>paid;
                                    bk.push_back(tie(passnum,price,hour,minute,dateo,seat,paid));
                                }
                                infile.close();
                                fstream updatefile;
                                updatefile.open("Booking.txt");
                                for(auto i : bk)
                                {
                                    updatefile<<get<0>(i)<<" "<<get<1>(i)<<" "<<get<2>(i)<<" "<<get<3>(i)<<" "<<get<4>(i)<<" "<<get<5>(i)<<endl;
                                }
                                updatefile.close();

                            }



                            else{
                                cout<<"Invalid comment"<<endl;

                            }



                        }
                        if(numa == 3)
                        {

                        }
                        if(numa == 4)
                        {

                        }
                        if(numa == 5)
                        {
                                flag = false;
                        }
                    }

                    ft.Flight_Vector();

                }
                else{
                        cout<<"This User is not Exists "<<endl;
                    }
            }


    else if(num == 3)
        {
            cout<<"check in"<<endl;
        }
    else if(num == 4)
        {
            cout<<"generate";
        }
    else {
            flag = false;
        }
    }
}


double App::calculate_distance(string Dairport , string Aairport){
    double num;
        if(Dairport == "Langkawi")
            {
                if(Aairport == "KualaLumpur")
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

                if(Dairport == "KualaLumpur")
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

                if(Dairport == "KualaLumpur")
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

                else if(Aairport == "KualaLumpur")
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

                else if(Aairport == "KualaLumpur")
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

                else if(Aairport == "KualaLumpur")
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


//normal function
int  welcome(){
    int choice;
    cout<<"Welcome To Airline Booking"<<endl;
    cout<<"[1]  New User "<<endl;
    cout<<"[2]  Existing User "<<endl;
    cout<<"[3]  Check In"<<endl;
    cout<<"[4]  Generate New Plane "<<endl;
    cout<<"[5]  Quit "<<endl;
    cout<<"Choose option"<<endl;
    cin >> choice;
    try{
        if(choice >= 6)throw string("Invalid Input");
    }
    catch(string &r)
    {
        cout<<r<<endl;
        cout<<"enter again"<<endl;
        cin>>choice;


    }
    return choice;

}


int  PassengerMenu(){
    int choice;
    cout<<"Welcome To Passenger Menu "<<endl;
    cout<<"[1] Reserve                 "<<endl;
    cout<<"[2] Change                  "<<endl;
    cout<<"[3] Pay                     "<<endl;
    cout<<"[4] Cancel                  "<<endl;
    cout<<"[5] Go back to Welcome Menu "<<endl;
    cout<<"Choose option"<<endl;
    cin >> choice;
    try{
        if(choice >= 6)throw string("Invalid Input");
    }
    catch(string &r)
    {
        cout<<r<<endl;
        cout<<"Enter again"<<endl;
        cin>>choice;
    }
    return choice;

}

