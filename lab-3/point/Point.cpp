#include<iostream>
#include<math.h>

#include "Point.h"

using namespace std;

Point::Point()
{
	Point(0,0);
}

Point::Point(int x1, int y1)
{
	if(x1<0)
		x1=0;
	if(y1<0)
		y1=0;
	set_x(x1);
	set_y(y1);
}
	
double Point::distance_from(int x1, int y1, int x2, int y2)
{
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

void Point::set_x(int num){x=num;}
void Point::set_y(int num){y=num;}
int Point::get_x(){return x;}
int Point::get_y(){return y;}


double Point::circumference()
{
	return distance_from(0,5,0,-5)+distance_from(0,5,x,y)+distance_from(0,-5,x,-y)+distance_from(x,y,x,-y);
}

void Point::symmetry(){ y= -y;}





