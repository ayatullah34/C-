/* 
#include<iostream>
using namespace std;

class Nokta{
	public:
	int x,y;
	void sec(int x1,int y1){
		x=x1;
		y=y1;
	}
	void print(){
		cout<<x<<","<<y<<endl;
	}
	bool zero_zero(){
		if(x==0 &&y==0)
		return true;
		else
		return false;
	}
	
};

int main(){
	Nokta n;
	Nokta arr[10];
	Nokta*array;
	array=new Nokta[10];
	for (int i=0;i<10;i++){
	arr[i].sec(i,i+2);
	(array+sizeof(Nokta)*i)->sec(i+5,i+10);
	}
	for (int i=0;i<10;i++){
	arr[i].print();
	(array+sizeof(Nokta)*i)->print();
	}
	Nokta *n2;
	n2=new Nokta();
	n2->sec(3,2);
	n2->print();
	
	n.sec(0,0);
	n.print();
	n.zero_zero();

	
	return 0;
}
*/

//-----------------FRIEND ÖRNEKLER---------------------

/*
#include<iostream>
using namespace std;
class B;
class A{
	private:
	int x;
	public:
	int getX();
	void setX(int);
	friend void Foo(A&);
	void setY(B&);
};
class B{
	private:
	int y;
	public:
	int getY();
	void setY(int);
	friend class A;
	
};

int A::getX(){ return x; }
void A::setX(int x1){ x=x1; }
void Foo(A&a){
	a.x=0;
}
void A::setY(B&y){ y.y=100;}
int B::getY(){ return y; }
void B::setY(int y1){ y=y1; }

int main(){
A n;
n.setX(5);
cout<<n.getX()<<endl;
Foo(n);
cout<<n.getX()<<endl;	
B b;
b.setY(50);
cout<<b.getY()<<endl;
n.setY(b);
cout<<b.getY()<<endl;
	return 0;
}
*/

-------------GET KULLANMADAN BASTIRMA ÞEKLÝ----------
#include<iostream>
using namespace std;
class C{
	private:
	int x;
	public:
	int getX();
	void setX(int);
	friend ostream& operator <<(ostream&,C&);
};
int C::getX(){ return x; }
void C::setX(int x1){ x=x1; }
ostream& operator <<(ostream&out,C&c){
	out<<c.x;
	return out;
}
int main(){
	C c;
	c.setX(3);
	cout<<c;
	return 0;
}


