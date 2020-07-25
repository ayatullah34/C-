#include<iostream>
using namespace std;

int a[10]={1,2,10,4,23,2,7,43,1,4};
int i=0;
for(;i<10;i++){
	int temp;
	if(a[i+1]>a[i])
	temp=a[i+1];
	a[i+1]=a[i];
	a[i]=temp;
}

int main(){
	for(int i=0;i<10;i++){
		cout<<a[i];
	}
	
	return 0;
}
