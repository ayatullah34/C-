#include<iostream>
using namespace std;
class P;
class Number{
private:
	int x;
public:
int getX();
void setX(int);
friend void Foo(Number&);
void setY(P&);
friend ostream& operator <<(ostream& o,Number n);

};
ostream& operator <<(ostream& o,Number n){
	o<<n.x;
	return o;
}

class P{
	int y;
public:
int getY();
void setY(int);
friend class Number;
	
	
};
void Number::setY(P&y){
	y.y=100;
}
void P::setY(int f){
	y=f;
	
}
int P::getY(){
return y;	
}
int Number::getX(){
	return x;
}
void Number::setX(int a){
	x=a;
}
void Foo(Number&b){
	b.x=0;
}
int main(){
	Number c;
	c.setX(5);
	cout<<c.getX()<<endl;
	Foo(c);
	cout<<c.getX()<<endl;
	P p;
	p.setY(50);
	cout<<p.getY()<<endl;
	Number j;
	j.setX(26);
	cout<<j<<endl;
	
	return 0;
}
