#include<iostream>
using namespace std;
class Number{
private:
int x;
public:
	Number();
	Number(int);
	~Number();
	int getX();
void setX(int);
};
Number::Number(){
	x=0;
}
Number::Number(int x){
	this->x=x;
}

int Number::getX(){
	return x;
}
void Number::setX(int x){
	this->x=x;
}
Number::~Number(){
	
}

int main(){
	int a;
	Number dizi[4]={1,2,3} ;
	for(int i=0;i<4;i++){
	cout<<dizi[i].getX()<<endl;
}
    Number *p=new Number(5);
   
    delete p;
     cout<<p<<endl;
    
	
	return 0;
}
