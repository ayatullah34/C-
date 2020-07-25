//---DESTRUCTOR VE ATAMA OPERATÖRÜ--------
/*

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
	       //--DESTRUCTOR--
	    //~Base(){
	    //	cout<<"Base Yikici"<<endl;
	    //	delete ptr; }
	    
	    Base& operator =(const Base& b){//atama operatörü...
	    	cout<<"Base Operator ="<<endl;
	    	delete ptr;
	    	ptr=new int(*b.ptr);
	    	return *this;
	    	
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
	//--DESTRUCTOR--
	//~Derived(){
	//	cout<<"Derived Yikici"<<endl;
	//	delete ptr2; }
	
	 Derived & operator =(const Derived & d){
	 	    Base::operator =(d);
	    	cout<<"Derived Operator ="<<endl;
	    	delete ptr2;
	    	ptr=new int(*d.ptr2);
	    	return *this;
	    	
		}


};

int main(){
	Derived d(100,200);
	cout<<"Main 1:ptr  "<<d.ptr<< " ptr 2: "<<d.ptr2<<endl;
	cout<<endl;
	Derived xd(300,400);
	cout<<"Main 2:ptr  "<<xd.ptr<< " ptr 2: "<<xd.ptr2<<endl;
	cout<<endl;
	xd=d;
	cout<<"Main 3:ptr  "<<xd.ptr<< " ptr 2: "<<xd.ptr2<<endl;


	
	
	
	
	return 0;
}
*/

//-----TÝP(TYPE) DÖNÜÞÜM--------
/*
#include<iostream>
using namespace std;

class Yazici{
	protected:
		string marka;
	public:
	
		Yazici(string marka):marka(marka){
			cout<<"Yazici sinifi"<<endl;
		}

};

class Tarayici{
	protected:
		string marka;
	public:
		
		Tarayici(string marka):marka(marka){
			cout<<"Tarayici sinifi"<<endl;
		}
		
};

class TarayiciliYazici:public Yazici,public Tarayici{
	public:
		
	    TarayiciliYazici(string m1,string m2):Yazici(m1),Tarayici(m2){
	    	cout<<"Tarayiciliyazici sinifi"<<endl;
	    	cout<<Yazici::marka<<endl;
	    	cout<<Tarayici::marka<<endl;
		
	}
	
	
};

int main(){
	//Yazici y;
	//Tarayici t;
	//cout<<endl;
	//TarayiciliYazici ty;
	TarayiciliYazici ty("Hp","Asus");
	cout<<endl<<endl;
	//cout<<ty.Yazici::marka<<endl;




	return 0;
}

*/

//-----TEMPLATE 1--------
/*
#include<iostream>
using namespace std;

template<typename T>
T artir(T a){
	return a+1;
}

template<typename T>
void swamp(T&x,T&y){
	T temp;
	temp=x;
	x=y;
	y=temp;

}

template<class T>
class sinif{
	public:
		T data;
		sinif(T data):data(data){ }
		
};




int main(){
	cout<<artir(1.5)<<endl<<endl;
	int a=5;
	int b=10;
	cout<<a<<"\t"<<b<<endl;
	swamp(a,b);
	cout<<a<<"\t"<<b<<endl;
	cout<<endl;
	
	char c1='A';
	char c2='B';
		cout<<c1<<"\t"<<c2<<endl;
		swamp(c1,c2);
		cout<<c1<<"\t"<<c2<<endl;
		cout<<endl<<endl;
		
		sinif<int> e(10);
		cout<<e.data<<endl;
		sinif<float> f(3.5);
		cout<<f.data<<endl;
		



	return 0;
}

*/

// ------TEMPLATE 2------
/*

#include<iostream>
#include<vector>
using namespace std;

template<typename T>
class V{
	T *data;
	int index;
	public:
		V():index(0){
			data=new T[100];
		}
		
		void ekle(T t){
			data[index++]=t;
			
		}
		bool isEmpty(){
			return index==0;
		}
		
		void print(){
			
			for(int i=0;i<index;i++)
				cout<<data[i]<<" ";
				if(!isEmpty())
				cout<<endl;
			}
			
			V<T> operator+(const V<T>& v){
				V<T> temp;
				for(int i=0;i<index;i++)
				temp.ekle(data[i]+v.data[i]);
				return temp;
			}
			
			
	
};





int main(){
	V<int>v1,v2;
	
	v1.ekle(1);
	v1.ekle(3);
	v1.ekle(5);
	v1.print();
	v2.ekle(3);
	v2.ekle(10);
	v2.ekle(15);
	v2.print();
	   (v1+v2).print();
	   
	cout<<endl;
	
	V<string>v3,v4;
	
	v3.ekle("Ali");
	v3.ekle("Veli");
	v3.ekle("Ayse");
	v3.print();
	v4.ekle("can");
	v4.ekle("kol");
	v4.ekle("sanli");
	v4.print();
		(v3+v4).print();
	
	
	

		

	return 0;
}
*/

//-----FÝLES------

#include<iostream>
#include<fstream>
using namespace std;




int main(){

	ofstream dosya;
	dosya.open("deneme.txt");
	dosya<<"hello";
	dosya.close();
	
	fstream dosya;
		dosya.open("deneme.txt");
	string satir;
	while(getline(dosya,satir)){
	

	cout<<satir<<endl;
}
	dosya.close();

	
	
	return 0;
}








