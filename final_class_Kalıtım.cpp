//-----KALITIM 1-----

//  !!!!! KOD 1 !!!!
/*
#include<iostream>
using namespace std;

class Human {

	protected:
		string tc;
		string ad;
		string soyad;
	public:
		Human(string tc="",string ad="",string soyad=""):tc(tc),ad(ad),soyad(soyad) {}

		string getTc() {
			return tc;
		}
		string getAd() {
			return ad;
		}
		string getSoyad() {
			return soyad;
		}
		void setTc(string tc) {
			this->tc=tc;
		}
		void setAd(string ad) {
			this->ad=ad;
		}
		void setSoyad(string soyad) {
			this->soyad=soyad;
		}
};

class student:public Human {
	private:
		string studentNo;
	public:
		student(string studentNo="",string tc="",string ad="",string soyad=""):studentNo(studentNo),Human(tc,ad,soyad) {}

		string getStudentNo() {
			return studentNo;
		}
		string setStudentNo(string studentNo) {
			this->studentNo=studentNo;
		}



};
int main() {
	Human ali("12323232","ali","can");
	cout<<ali.getTc()<<" "<<ali.getAd()<<" "<<ali.getSoyad()<<endl;
	student ogr("322","4343343434","veli","can");
	cout<<ogr.getStudentNo()<<" "<<ogr.getTc()<<" "<<ogr.getAd()<<" "<<ogr.getSoyad()<<endl;
	return 0;
}
*/

//  !!!!!  KOD 2 !!!!!!

//---------------OVERRÝDE(EZME)-----------------
/*
#include<iostream>
using namespace std;

class Base{
	public:
	int data[100];
	int size;
	int x;
	Base():size(0),x(0){}
	void add(int value){
		data[size]=value;
		size++;
	}
	void print(){
		cout<<"Base print()"<<endl;
		for(int i=0;i<size;i++)
		cout<<data[i]<<" ";
	}
	
};
class Derived:public Base{
	public:
	float data[100];
	int size;
    Derived():size(0){}
	void add(float value){
		data[size]=value;
		size++;
	}
	void print(){
		Base::print();
		cout<<endl;
		cout<<"Derived print()"<<endl;
		for(int i=0;i<size;i++)
		cout<<data[i]<<" ";
 }
	void addInt(int value){
		Base::add(value);
	}
	void x(){
		cout<<"Hello world"<<endl;
	}
};


int main(){
Base b;
b.add(10);
b.add(20);
b.print();	
cout<<endl;
Derived d;
d.addInt(5);
d.addInt(7);
d.add(3.6);
d.add(3.3);
d.print();
d.x();
Base *ptr=&d;
ptr->x=2;
cout<<ptr->x<<endl;
cout<<d.size<<endl;
	
	return 0;
}
*/

//  !!!!!  KOD 3 !!!!!!

//------Türemiþ Sýnýftan Taban Sýnýfýn Kurucu Methodunu Çaðýrma-------
/*
#include<iostream>
using namespace std;

class Base{
//	public:
//		int *ptr;
//		Base(int i=0){
//			ptr=new int(i);
//	}

private:
	int *ptr;
	double *fPtr;
public:
		
		Base(int i){
			cout<<"int kurucu"<<endl;
			ptr=new int(i);
	}
	    
	    Base(double i){
	    	cout<<"double kurucu"<<endl;
	    	fPtr=new double(i);
	    	
		}
		
		int getPtr(){
			return *ptr;
		}
		//int setPtr(*ptr){
		//	this->ptr=ptr;
		//}
		
};

class Derived:public Base{
	public:
		int *ptr2;
		Derived(int i=0,int j=0):Base(1.2){
		ptr2=new int(j);
    }


};

int main(){
	//Base b(100);
	//cout<< *b.ptr<<endl; ---ÝLK YOL PIRAVITE OLMADAN
	//cout<< b.getPtr()<<endl;
	Derived d(50,25);
	cout<<*d.ptr2<<endl;
	cout<< d.getPtr()<<endl;
	
	
	
	return 0;
}
*/

//  !!!!!  KOD 4 !!!!!!

//-----Taban Sýnýfýn Kopyalama Kurucusunu Çaðýrma---------

#include<iostream>
using namespace std;

class Base{

public:
		int *ptr;
		Base(int i=1){
			cout<<"Base kurucu"<<endl;
			ptr=new int(i);
	}
	
	Base(const Base&b){
			cout<<"Base Kopyalama kurucu"<<endl;
		ptr=new int(*b.ptr);
	}
	    
		
};

class Derived:public Base{
	public:
		int *ptr2;
		Derived(int i=3,int j=2):Base(i){
			cout<<"Derived kurucu"<<endl;
		ptr2=new int(j);
    }
    
    Derived(const Derived&d):Base(d){
    		cout<<"Derived Kopyalama kurucu"<<endl;
    	ptr2=new int(*d.ptr2);
	}


};

int main(){
	Base b(100);
	cout<< b.ptr<<"\t"<<*b.ptr<<endl;
	Base xb=b;
	cout<<xb.ptr<<"\t"<<*xb.ptr<<endl;
	 cout<<endl<<endl;

	 Derived d(100,250);
	 cout<< d.ptr2<<"\t"<<*d.ptr2<<endl;
	 Derived xd=d;
	 	cout<<xd.ptr2<<"\t"<<*xd.ptr2<<endl;
	 	cout<<endl<<endl;
	 	
	 	cout<< d.ptr<<"\t"<<*d.ptr<<endl;
	cout<<xd.ptr<<"\t"<<*xd.ptr<<endl;
	 	
	
	
	
	
	return 0;
}




