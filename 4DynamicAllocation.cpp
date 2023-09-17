#include<bits/stdc++.h>
using namespace std;

class Girls{
public:
	int f;	
};
int main(){
	Girls *g1 = new Girls; //dynamic allocation of object g1 of type Girls
	
	//assigning object (both same)-
	(*g1).f = 12;
	g1->f = 11;
	
	//accessing object (both are same)
	cout<<(*g1).f<<" ";
	cout<<g1 -> f;
return 0;	
}