#include<iostream>
using namespace std;
class Point{
	
	public:
		int a,b;
		Point(){
			a=0;
			b=0;
			
		}
		Point(int x,int y){
			a=x;
			b=y;
		}
	Point operator +=(Point);
	Point operator +(int);
	void operator ++(int);
	void operator<<(Point str);
		};
		
		
		void Point::operator<<(Point str){
		Point c;
		a=str.a;
		b=str.b;
		str.a<<str.b;
	}
	
	
void Point::operator ++ (int){
		a=a+1;
		b=b+1;
	
	}
Point Point::operator +=(Point num){
         Point temp;
         temp.a=a+num.a;
         temp.b=b+num.b;
         return temp;
	
}
Point Point::operator +(int n){
	Point tem;
	tem.a=a+n;
	tem.b=b+n;
	return tem;
	
}
int main(){
	Point c;
	Point a(1,2);
	Point b(2,3);
	c<<a;

	/*c=a+=b;
	cout<<c.a<<","<<c.b<<endl;
	c=a+2;
	cout<<c.a<<","<<c.b<<endl;
	c++;
		cout<<c.a<<","<<c.b<<endl;
	*/
	
	;

	

	return 0;
}
