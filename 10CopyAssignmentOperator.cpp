#include<bits/stdc++.h>
using namespace std;

class Assignment{
public:
	int health;
	char level;
	
	Assignment(int h , char l){
		health = h;
		level = l;
	}
	
	void print(){
		cout<<this->health;cout<<endl;
		cout<<this->level;cout<<endl;
	}
	
};

int main(){
	Assignment a(10,'A');
	Assignment b(20,'B');
	
	a.print();
	b.print();
	
	a=b; //a me b ki values copy
	a.print();
	b.print();
	
return 0;	
}