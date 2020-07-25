//main.cpp
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string.h>
#include "Car.h"

using namespace std;

#define SIZE 10
	
void writeToFile( Car* cars, string fileName ){
	//... Write data to the file given as parameter -fileName- Check the unsortedcars.txt or sortedcars.txt  for the output style. (Veriyi parametre olarak aldığınız fileName değişkeni ile belirtilen dosyaya yazınız. Çıktı formatı için unsortedcars.txt or sortedcars.txt dosyasını inceleyiniz.)
ofstream out;
out.open( fileName.c_str());
	for(int i=0;i<SIZE;i++){
		out <<"ID"<<cars[i].getVehicleID()<<"YEAR"<<cars[i].getManufactureYear()<<"KM"<<cars[i].getKmCount()<<endl;
                
	}


}

Car* readFromFile( string fileName ){
	//... Read data from the file given as parameter -fileName-. (Veriyi parametre olarak aldığınız fileName değişkeni ile belirtilen dosyadan okuyunuz.)


/*ifstream input
int id,d,km,t,i=0,arr;
Car *temp=new Car[SIZE];
input.open(fileName.c_str());
while(input.eof()){
input>>t;
id=t;
input>>t;
d=t;
input>t;
km=t;
Car temp(id,d,km);
temp=&t;


i++
}
return arr;
*/
Car* check=new Car[SIZE];
	int ident;
	double val;
        int deger; 
	ifstream input(fileName.c_str());
	for(int i=0;i<SIZE;i++){
		
		check[i].getVehicleID();
		check[i].getManufactureYear();
                check[i].getKmCount();
	}
	return check;
}


//sort in ascending order according to kmCount. If there are vehicles with the same kmCount, then sort according to year in ascending order, and if they have the same year, then consider vehicleID and sort according to vehicleID in ascending order.  ( kmCount değişkenine göre artan sırada sıralayınız. Eğer aynı kmCount değerine sahip araçlar varsa, yıla göre artan sırada sıralayınız. Araçlar hem aynı kmCount hem de aynı yıla sahipse vehicleID’ye göre artan sırada sıralayınız.)
void sortCars( Car* cars ){
	
}

void printCars( Car* cars ){
	for(int i=0; i<SIZE; i++){
		cout << "ID: " << cars[i].getVehicleID()
			<< " YEAR: " << cars[i].getManufactureYear()
			<< " KM: " << cars[i].getKmCount() << endl;
	}
	cout<<endl;
}

int main(){
	Car* cars;
	cars = readFromFile( "Cars");
	printCars( cars );
	writeToFile( cars, "unsortedcars.txt" );
	sortCars( cars );
	printCars( cars );
	writeToFile( cars, "sortedcars.txt" );
	return 0;	
}
