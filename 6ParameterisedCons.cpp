#include<bits/stdc++.h>
using namespace std;

class Hero{
	public:
		int health;
		//passing params
		Hero(int health){
			// health = h; will work if param = h
			// health = health will not work 
						//isme khud ki value me khud ko copy 
						//(suppose param = datamember)
						//use this KW
						//this is pointer to current object
			this -> health = health;
			//upar wala healt = param wala health
			cout<<endl;
			//to verify -> this pointer will point to add of obj
			cout<<"add of this:-> "<<this;
			cout<<endl;
		}
};

int main(){

	Hero h1(10);cout<<h1.health;
	cout<<endl;
	//same add as of this pointer
	cout<<"h1 ka add:->"<<&h1;
return 0;	
}