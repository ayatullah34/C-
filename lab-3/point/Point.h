#include<iostream>
using namespace std;

class Point
{	
	public:	
		Point();
		Point(int, int);
			
		double distance_from(int, int, int, int);
		void set_x(int);
		void set_y(int);
		int get_x();
		int get_y();
		double circumference();
		void symmetry();
		void print()
		{
			cout<<"Point= ("<<x<<","<<y<<")"<<endl;	
			cout<<"Circumference= "<<circumference()<<endl;
			symmetry();
			cout<<"Symmetry= ("<<x<<","<<y<<")"<<endl;
		}
	private:
		double x,y;
};








