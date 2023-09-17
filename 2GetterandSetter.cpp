#include<bits/stdc++.h>
using namespace std;

//getter and setter -> fun through which we can access private data
					// members of a class
class Hero{
	int level;	
	char name;

public:
	//getter -> is to just fetch the data
	// setter  -> can be used with some conditions
	int getLevel(){
		return level;
	}
	char getname(){
		return name;
	}
	void setLevel(int l){
		level = l;
	}
	void setname(char n){
		if(n == 'A') name = n; //here i used it as password	that if pwd is this then it will change
	}
};

int main(){
	Hero h1;
	h1.setLevel(10);
	cout<<h1.getLevel();
	
	cout<<endl;
	
	h1.setname('A');
	cout<<h1.getname();
return 0;	
}