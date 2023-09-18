#include<bits/stdc++.h>
using namespace std;

class Shallow{
private:
	int health;
	
public:
	char *name;
	char level;
	
	//default cons
	Shallow(){
		name = new char[100];
	}
	
	void setHealth(int h){
		health = h;
	}	
	void setLvl(char l){
		level = l;
	}
	void setName(char name[]){
		// strcpy(this->name,name);
		this->name = name;
	}
	
	void print(){
		cout<<"health:-> "<<this->health<<endl;
		cout<<"name:-> "<<this->name<<endl;
		cout<<"level:-> "<<this->level<<endl;
	}
};

int main(){
	Shallow h1;
	h1.setHealth(12);
	h1.setLvl('d');
	char naam[10] = "Abhishek";
	h1.setName(naam);
	cout<<"h1"<<endl;
	h1.print();
	
	cout<<"h2"<<endl;
	//use default copy cons
	Shallow h2(h1);
	h2.print();
	
	cout<<"changes"<<endl;
	h1.name[0] = 'K';
	h1.setHealth(26);
	h1.setLvl('X');
	cout<<"changed h1--------->"<<endl;
	h1.print();
	cout<<"changed h2--------->"<<endl;
	h2.print();
	//only name me dikkat (pointer)
	//as name is a pointer so h1.name and h2.name is pointing
	// to same mem location i.e, SHALLOW COPY by (default cons)
return 0;	
}