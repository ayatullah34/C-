#include<iostream>
using namespace std;

int main(){
string a="ALI AY";

cout<<a<<endl;

cout<<a.find("AY")<<endl;//kelime veya harfi bulur.

cout<<a.find("A",1)<<endl;

cout<<a.find("A",1)<<endl;//verilen yerden itibaren bakar...

cout<<a.at(4)<<endl;//ka��nc� s�rada old. bulur...

cout<<a.length()<<endl;//uzunlu�u bulur.

cout<<a.insert(4,"c",2)<<endl;//araya string ekler,ikinci say� ka� bo�luk b�rakaca��n�belirler.

cout<<a.erase(2,5)<<endl;//nerden nereye kadar silece�i belirlenir...

cout<<a.substr(1,5)<<endl;//al string olu�turur...

string str;
getline(cin,str,'-');
cout<<str<<endl;

a.clear();//i�ini temizler.

cout<<a.empty();//bo� mu diye kontrol eder.

	return 0;
}
