#include<bits/stdc++.h>
using namespace std;

class Deep{
private:
	int health;
	
public:
	char *name;
	
	Deep(){
		cout<<"default chaiye"<<endl;
		name = new char[100];
	}
	
	Deep(Deep& temp){
		//called when , d2(d1)
		//new array banaya of len temp.name + 1(null char) 
		char *ch = new char[strlen(temp.name)+1];
		//all values of temp.name i.e,d1 is copy to d2	
		strcpy(ch , temp.name);
		//assign name h2 ka name = ch (this ch array) // name(diff location)
		this->name = ch;
		
		this->health = temp.health;
	}
	void setHealth(int h){
		health = h;
	}
	void setName(char n[]){
		this->name = n;
	}
	void print(){
		cout<<"name-> "<<this->name;cout<<endl;
		cout<<"health-> "<<this->health;cout<<endl;
	}
};

int main(){
	Deep d1;
	d1.setHealth(10);
	char naam[10] = "Abhishek";
	d1.setName(naam);
	
	cout<<"d1"<<endl;
	d1.print();
	
	Deep d2(d1);
	cout<<"d2"<<endl;
	d2.print();
	
	cout<<"changes----------------->"<<endl;
	d1.name[0] = 'X';
	d1.print();
	d2.print();
	
	
	
return 0;	
}