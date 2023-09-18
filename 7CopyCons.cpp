#include<bits/stdc++.h>
using namespace std;

class Hero{
public:
	int health;	
	
	Hero(){
		cout<<"default bhi chaiye for normal obj"<<endl;
	}
	
	//khud ka copy cons
	
	Hero(Hero& temp){
		cout<<"this called on h2(h1)"<<endl;
		this->health = temp.health;
	}
};

int main(){
	Hero h1;
	h1.health=10;
	//copy cons
	// Hero h2 = h1;
	//here default copycons called all values of h2=h1
	// Hero h2(h1);
	// cout<<h2.health;
	
	
	//khud ke copy cons ke lie upar implementation
	Hero h2(h1);
	cout<<h2.health;
	
	
return 0;	
}