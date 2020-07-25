#include <string>
using std::string;

#define SIZE 3

class Student{

public:
	Student();

	Student(string,string,string,int,double, int* );

	string getName();
	void setName(string);

	string getSurname();
	void setSurname(string);

	string getDepartment();
	void setDepartment(string);

	int getNumber();
	void setNumber(int);

	double getGpa();
	void setGpa(double);

	void setGrades(int *);
	int * getGrades();

	double getAverageGrade();

	void print();



private:
	string name;
	string surname;
	string department;
	int number;
	int *grades;
	double gpa;
	
};