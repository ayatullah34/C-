//----------OPERATOR OVERLOADÝNG----------
/*
#include<iostream>
using namespace std;
class Kompleks{
	
private:
    int reel;
    int sanal;
    
public:
    Kompleks(int r = 0, int s = 0)
    {
        reel = r;
        sanal = s;
    }
	int getReel()
    {
        return reel;
    }

    int getSanal()
    {
        return sanal;
    }

    void setReel(int r)
    {
        reel = r;
    }

    void setSanal(int s)
    {
        sanal = s;
    }
        void print()
    {
        if(sanal > 0)
            cout << reel << " + " << sanal << "i" << endl;
        else if(sanal < 0)
            cout << reel << " - " << -sanal << "i" << endl;
        else
            cout << reel << endl;
    }
    //Kompleks operator +(const Kompleks& obj );
  
};

 //Kompleks Kompleks::operator +(const Kompleks& obj ){
 //	Kompleks temp;
 //	temp.reel=obj.reel+reel;
 //	temp.sanal=obj.sanal+sanal;
 //	return temp;    }

 Kompleks operator+ (Kompleks obj1,Kompleks obj2 ){
 	
 	Kompleks topla;
 	topla.setReel(obj1.getReel()+obj2.getReel());
 	topla.setSanal(obj1.getSanal()+obj2.getSanal());
 	return topla;
}
ostream &operator <<(ostream&out,Kompleks obj){
	int sanal=obj.getSanal();
	int reel=obj.getReel();
	if(sanal > 0)
            out << reel << " + " << sanal << "i" << endl;
        else if(sanal < 0)
            out << reel << " - " << -sanal << "i" << endl;
        else
            out << reel << endl;
	return out;
}

int main()
{
	Kompleks k1(2,3);
	k1.print();
	Kompleks k2(4,-1);
	Kompleks k3=k1+k2;
	//k3.print();
	cout<<k3;
    
    return 0;
}
*/
#include<iostream>
using namespace std;

class Kolon{
	int *data,boyut;
	public:
	
		Kolon(int boyut=1):boyut(boyut){
			data=new int[boyut];
		}
		
		int getBoyut(){return boyut;}
		
		void setBoyut(){
		this->boyut=boyut;
		}
		~Kolon(){
			delete data[];
		}
		Kolon(const Kolon&k){
			this->boyut=k.boyut;
			data=new int [boyut];
		}
		Kolon operator +(const Kolon&);
		
		
};
Kolon Kolon::operator +(const Kolon&k){
	if(boyut==k.boyut){
		Kolon temp;
		for(int i=;i<boyut;i++)
		temp.data[i]=data[i]+k.data[i];
	}
}
	




int main(){
	Kolon k(4);
	Kolon k2(4);
	
	k.setBoyut(0,10);
	k.setBoyut(0,10)
	(k+k2).print();
	
	
	return 0;
}





