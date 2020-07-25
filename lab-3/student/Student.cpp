#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

Student::Student(){

}

Student::Student(string s1, string s2, string s3, int i1, double d1, int * g ){
	setName( s1 );
	setSurname( s2 );
	setDepartment( s3 );
	setNumber( i1 );
	setGpa( d1 );
	setGrades( g );
}

void Student::setName( string n ){
	name = n;
}

void Student::setSurname( string s ){
	surname = s;
}

void Student::setDepartment( string d ){
	department = d;
}

void Student::setNumber( int n ){
	number = n;
}

void Student::setGpa( double g ){
	gpa = g;
}

void Student::setGrades( int * g ){
	grades = g;
}

int * Student::getGrades(){
	return grades;
}

string Student::getName(){
	return name;
}

string Student::getSurname(){
	return surname;
}

string Student::getDepartment(){
	return department;
}

int Student::getNumber(){
	return number;
}

double Student::getGpa(){
	return gpa;
}

double Student::getAverageGrade(){
	int sum = 0;
	for(int i=0; i<SIZE; i++)
		sum += grades[i] ;


	return ((double)sum)/SIZE;
}

void Student::print(){
	cout <<"Name:"<<name<<endl
		 <<"Surname:"<<surname<<endl
		 <<"Department:"<<department<<endl
		 <<"GPA:"<<gpa<<endl
		 <<"Grades: " ;

	for( int i=0; i<SIZE; i++ )
		cout<<grades[i]<<" ";
	cout<<endl;
	cout<<"Average grade:"<<getAverageGrade()<<endl;
}
