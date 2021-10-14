//to find the roots
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	float deter,real,x1,x2,imagi,b,a,c;
	
	cout<<"enter values a b and c"<<endl;
	cin>>a>>b>>c;
	
	//deter
	deter = (b*b)/(4*a*c);
	
	//roots are real and not equal
	if(deter>0){
	
	x1 = (-b + sqrt(deter))/(2*a);
	x2 = (-b - sqrt(deter))/(2*a);
	cout<<"roots are "<<"x1 == "<<x1<<" x2== "<<x2<<endl;
	}
	
	if(deter == 0){
		//roots are real and equal
		x1 = -b/2*a;
		cout<<"roots are"<<"x = "<<x1<<endl;
		}
	
	if(deter<0){
		//roots are real and imaginery
		x1 = -b/2*a;
		x2 = sqrt(deter)/2*a;
		cout<<"roots are "<<"x1 == "<<x1<<" x2== "<<x2<<endl;
	}
	
}
