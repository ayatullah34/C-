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

