#include<iostream>
#include<math.h>

#include "Point.h"

using namespace std;

int main()
{	
	double x1, y1;
	cin>>x1>>y1;	
	Point t(x1, y1);
	t.print();
	return 0;
}
