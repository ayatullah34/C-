#include <iostream>
 
using namespace std;

 
int main()
{
int dizi[10]={1,3,23,4,21,4,2,4,5,1};
int temp;
for(int i=0;i<10-1;i++)


		for(int j=0;j<10-1;j++) 
		{ 
		if(dizi[j]>dizi[j+1]) 
		{ 
		temp=dizi[j]; 
		dizi[j]=dizi[j+1]; 
		dizi[j+1]=temp; 
		} 
	}

	for (int j=0;j<10;j++)
	{
		cout<<dizi[j]<<"  ";
	}


return 0;

}
