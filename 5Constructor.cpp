#include<bits/stdc++.h>
using namespace std;

// constructor -> whenever u create an obj constructor is called
//			   -> no return type
//			   -> default cons class bana ne se ban jata hai
// 			   -> no parameter in default constructor
//			   -> khud ka bana doge to default deleted 
//             -> agar khud ka bhi del karoge to default wapis nahi aega:()

class Dc{
public:
	//Khud ka Default constructor
	Dc(){
		cout<<"constructor called"<<" ";
	}
};

int main(){
	cout<<"kya hal hai"<<endl;
	Dc obj1; //creating this will call Dc
	Dc *obj2 = new Dc; //same with this case
return 0;	
}