#include<iostream>
#include<math.h>
using namespace std;

#include "Triangle.h"

int main()
{	
	double x1, y1, x2, y2, x3, y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;	
	Triangle t(x1, y1, x2, y2, x3, y3);
	t.print();
	return 0;
}

