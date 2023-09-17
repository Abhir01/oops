#include<bits/stdc++.h>
using namespace std;

class Boys{
public:
	int health;
	char money;
};

int main(){
	Boys b1; 
	cout<<sizeof(b1);
	
	//if i check size with just one integer it is = 4
	//if i check size with just one char it is = 1 
	//if i check size with two integers it is = 4+4 => 8
	//but
	//if i check size with one integer and one char ??
	//as above it should be 4+1-> 5 but it is not
	//it is 8
	
	//this is bcz of PADDING / ALIGNMENT
	// i.e, size = No of Data Member * Max(sizes of all Data Members)
return 0;	
}

