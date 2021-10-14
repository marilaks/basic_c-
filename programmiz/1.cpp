//quotient and reaminder
#include<iostream>
using namespace std;

int main(){
	int quotient,dividend,divisor,remainder;
	
	cout<<"enter dividend"<<endl;
	cin>>dividend;
	
	cout<<"enter divisor"<<endl;
	cin>>divisor;
	
	//logic
	quotient = dividend/divisor;
	remainder= dividend%divisor;
	
	
	cout<<"quotient:"<<quotient<<endl;
	cout<<"remainder"<<remainder<<endl;
	
	return 0;
	
}
