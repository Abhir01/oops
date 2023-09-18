#include<bits/stdc++.h>
using namespace std;

class Assignment{
public:
	int health;
	char lvl;
	
	Assignment(int health , int lvl){
		this->health = health;
		this->lvl = lvl;
	}
	void print(){
		cout<<this->health;
		cout<<this->lvl;
	}
};

int main(){
	Assignment a(10,'X');
	Assignment b(20,'Y');
	
	a.print();cout<<endl;
	b.print();cout<<endl;
	
	//copying all values of obj b to obj a
	a = b ;//copy assignment operator 
	cout<<"Copy assignment ke bad-> a=b ";cout<<endl;
	a.print();cout<<endl;
	b.print();
return 0;	
}