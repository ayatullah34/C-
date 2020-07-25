/* 
#include<iostream>
using namespace std;
int main(){
	cout<<"Hello \tWorld"<<"  heyy\n";
	int number=10;
	cout<<number<<"  cout hala devammm\n";
	int number2;
	cin>>number2;
	cout<<number2;
	
	
	return 0;
} 
*/
/*
#include<iostream>
using namespace std;
class dikdortgen{
int a,b;
public:
void deger(int x,int y);
	int alan(){
		return a*b;}
		};
void dikdortgen::deger(int x,int y){
			a=x;
			b=y;
		}

int main(){
dikdortgen d1;
d1.deger(3,4);
cout<<d1.alan();
	
	return 0;
}
*/

/*
}#include<iostream>
using namespace std;
class dikdortgen{
int a,b;
public:
	void box(int x,int y);
	int alan(int a,int b){
		return a*b;
	}
	int cevre(int a,int b){
		return 2*(a+b);
	}
	};
	 void dikdortgen::box(int x,int y){
		x=a;
		y=b;
	}
	
int main(){
	dikdortgen d1,d2;
    cout<<d1.alan(3,4);
     cout<<d2.alan(3,4);
      cout<<d1.cevre(3,4);
	
}
*/
#include<iostream>
using namespace std;
class dikdortgen{
	
private:
	int x,y;
	public:
		dikdortgen();
		dikdortgen(int a,int b);
		int alan(int x,int y ){return x*y;}
	};
	
	dikdortgen::dikdortgen(){
		x=6;
		y=6;
	}
	dikdortgen::dikdortgen(int a,int b){
		x=a;
		y=b;
	}
	int main(){
		dikdortgen d1={10,20};
		cout<<d1.alan();
	}
