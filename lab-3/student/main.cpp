#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

int main(){

	string temp;
	double temp2;
	int temp3;

	int grades[SIZE] = {50,60,70};

	Student s("Ahmet","Yilmaz","CS",2011111,4.0, grades );
	s.print();

	cout<<endl;

	Student s2;
	cin >> temp;
	s2.setName(temp);

	cin >> temp;
	s2.setSurname(temp);

	cin >> temp;
	s2.setDepartment(temp);

	cin >> temp2;
	s2.setGpa(temp2);

	for( int i=0; i<SIZE; i++ ){
		cin >> temp3;
		grades[i] = temp3;
	}
	
	s2.setGrades(grades);
	s2.print();

	return 0;


}
