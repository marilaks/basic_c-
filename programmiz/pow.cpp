//pow() function
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	float base,expo,res;
	
	cout<<"enter base and expo"<<endl;
	cin>>base>>expo;
	
	res = pow(base,expo);
	cout<<"result is "<<res;
	
	return 0;
	
	
}
