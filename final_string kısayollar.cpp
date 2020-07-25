#include<iostream>
using namespace std;

int main(){
string a="ALI AY";

cout<<a<<endl;

cout<<a.find("AY")<<endl;//kelime veya harfi bulur.

cout<<a.find("A",1)<<endl;

cout<<a.find("A",1)<<endl;//verilen yerden itibaren bakar...

cout<<a.at(4)<<endl;//kaçýncý sýrada old. bulur...

cout<<a.length()<<endl;//uzunluðu bulur.

cout<<a.insert(4,"c",2)<<endl;//araya string ekler,ikinci sayý kaç boþluk býrakacaðýnýbelirler.

cout<<a.erase(2,5)<<endl;//nerden nereye kadar sileceði belirlenir...

cout<<a.substr(1,5)<<endl;//al string oluþturur...

string str;
getline(cin,str,'-');
cout<<str<<endl;

a.clear();//içini temizler.

cout<<a.empty();//boþ mu diye kontrol eder.

	return 0;
}
