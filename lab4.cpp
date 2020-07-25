#include<iostream>
using namespace std;

class AppointmentDay{
public:
    AppointmentDay(int day=5){
      AppDay=day;

    }
    void printAppointmentDay(){
        cout<<AppDay<<"/";

    }
private:
   
    int AppDay;

};

class AppointmentMonth{
public:
    AppointmentMonth(int month=10){

     AppMonth=month;
    }
    void printAppointmentMonth(){
        	
	cout<<AppMonth<<"/";

    }
private:
   
    int AppMonth;

};

class AppointmentYear{
public:
    AppointmentYear(int year=1){
        
	AppYear=year;
    }
    void printAppointmentYear(){
        
	cout<<AppYear<<" ";
    }
private:
   
    int AppYear;

};

class AppointmentHour{
public:
    AppointmentHour(int hour=1,int minute=1){
        
	AppHour=hour;
	AppMinute=minute;
    }
    void printAppointmentHour(){
        
	cout<<AppHour<<":"<<AppMinute;
    }
private:
   
    int AppHour;
    int AppMinute;

};

class Person{

public:
    Person(string name2,AppointmentDay getday,AppointmentMonth getmonth,AppointmentYear getyear,AppointmentHour gethour)
    { 
        name=name2;
        dayOfAppointment=getday;
        monthOfAppointment=getmonth;
        yearOfAppointment=getyear;
        hourOfAppointment=gethour;
    }

    void printInfo(){
        
	cout<<name;
	cout<<" ";
	dayOfAppointment.printAppointmentDay();
	monthOfAppointment.printAppointmentMonth();
	yearOfAppointment.printAppointmentYear();
    
    hourOfAppointment.printAppointmentHour();
    }

private:
    string name;
    AppointmentDay dayOfAppointment;
    AppointmentMonth monthOfAppointment;
    AppointmentYear yearOfAppointment;
    AppointmentHour hourOfAppointment;


};

int main() {

    int day, month, year, hour, minute;
    cin>>day>>month>>year>>hour>>minute;
    AppointmentDay dayObject(day);
    AppointmentMonth monthObject(month);
    AppointmentYear yearObject(year);
    AppointmentHour hourObject(hour,minute);
    Person pe ("Lenny", dayObject,monthObject,yearObject,hourObject);
    pe.printInfo();

    return 0;

}

