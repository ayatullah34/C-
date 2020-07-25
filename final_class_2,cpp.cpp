//----------------CONSTRUCTOR--------
/*
#include<iostream>
using namespace std;
class C{
	private:
	int x,y;
	public:
    C();
    C(int,int);
	int getX();
	void setX(int);
    int getY();
	void setY(int);
};
C::C(){
	x=0;
	y=0;
}
C::C(int x,int y=7){
	this->x=x;
	this->y=y;
}
int C::getX(){ return x; }
void C::setX(int x1){ x=x1; }
int C::getY(){ return y; }
void C::setY(int y1){ y=y1; }

int main(){
	C c;
	C c2(5);
	cout<<c.getX()<<","<<c.getY()<<endl;
	cout<<c2.getX()<<","<<c2.getY()<<endl;

	return 0;
}
*/

//---------------DÝZÝ VE POÝNTER ÝÇÝN CONSTRUCTOR----------

/*
#include<iostream>
#include<math.h>
using namespace std;
class C{
	private:
	int x,y;
	public:
	
    C();
    C(int,int,int);
    C(const C&); //COPY CONSTRUCTOR...
    ~C();
    static int a;//STATÝC...
    const int t;
    int *z;
	int getX();
	void setX(int);
    int getY();
	void setY(int);

	
};
int C::a=0;
C::C():t(0){
	x=0;
	y=0;
	z=new int(6);
	a++;//STATÝC...
}
C::C(int x,int y=7,int t=100):t(t){
	this->x=x;
	this->y=y;
	z=new int(5);
	a++;//STATÝC...
	
}
C::C(const C& n):t(n.t){ //COPY CONSTRUCTOR...
	x=n.x;
	y=n.y;
	z=new int(*n.z);
	cout<<"COPY CONSTRUCTOR"<<" "<<x<<" "<<y<<endl;
    a++;//STATÝC...
}
C::~C(){
	cout<<"destructor started"<<endl;
	delete z;
}

int C::getX(){ return x; }
void C::setX(int x1){ x=x1; }
int C::getY(){ return y; }
void C::setY(int y1){ y=y1; }


}


int main(){
	C c;
	C c2(5);
	cout<<c2.t<<endl;
	//cout<<c.getX()<<","<<c.getY()<<endl;
	//cout<<c2.getX()<<","<<c2.getY()<<endl;
	C dizi[5]={{1,2},{3},{7,1}};
	for(int i=0;i<5;i++){
		cout<<dizi[i].getX()<<","<<dizi[i].getY()<<endl;
	}
		cout<<C::a;//STATÝC...
		cout<<endl;//STATÝC...
	C f;
	cout<<f.t<<endl;
	C d(c2); //COPY CONSTRUCTOR...
	C e=d; //COPY CONSTRUCTOR...
	cout<<C::a;//STATÝC...
	cout<<endl;//STATÝC...
	
	
	
	return 0;
}
*/

//-----------------METHODLAR------

#include<iostream>
#include<math.h>
using namespace std;
class C{
	private:
	int x,y;
	public:
    C();
    C(int,int);
	int getX();
	void setX(int);
    int getY();
	void setY(int);
	void print();
	double uzaklikhesaplama(C&);
	C topla(const C&);
	
};
C::C(){
	x=0;
	y=0;
}
C::C(int x,int y=7){
	this->x=x;
	this->y=y;
}
int C::getX(){ return x; }
void C::setX(int x1){ x=x1; }
int C::getY(){ return y; }
void C::setY(int y1){ y=y1; }
void C::print(){
	cout<<x<<","<<y<<endl;
}

double C::uzaklikhesaplama(C& n) {
	int xU=pow(n.getX()-x,2);
	int yU=pow(n.getY()-y,2);
	return sqrt(xU+yU);
}
C C::topla(const C& n){
	int x=this->x+n.x;
	int y=this->y+n.y;
	return C(x,y);
}
class cizgi{ //ÝÇ ÝÇE SINIFLAR ÖRNEÐÝ...
	private:
		C first,last;
		public:
			cizgi(C first,C last):first(first),last(last){
			}
        double uzunluk(){
        	return first.uzaklikhesaplama(last);
		}
		void yazdir(){
			cout<<"baslangic noktasi=";
			first.print();
			cout<<"bitis noktasi=";
			last.print();
			cout<<"Cizginin uzunlugu="<<uzunluk()<<endl;
		}
};


int main(){
	C c(3,4);
	C c1(5,6);
	cout<<c.uzaklikhesaplama(c1)<<endl;
	C n1(2,5);
	C n2(15,30);
	C n3=n1.topla(n2);
	n3.print();
	
	cizgi m(C(0,0),C(5,5)); //ÝÇ ÝÇE SINIF...
	m.yazdir();


	return 0;
}






