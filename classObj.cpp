#include<iostream>
using namespace std;

//class
class Hero{
public:	//Access Modifier
    int health; //properties
    char level;
};

int main(){
    Hero h1; //object initialised
    cout<<sizeof(h1)<<endl; //4 as integer
    
    h1.health = 10;
    cout<<h1.health; //accessing properties / Data members using . operator
    				//to access it make the data members public
    return 0;
}

//for an empty class , obj is allocated 1 byte memory
// for its identification and keeping a track

