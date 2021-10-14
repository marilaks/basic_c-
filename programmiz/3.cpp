//swap two num
#include<iostream>
using namespace std;

int main(){
	int a,b,temp;
	cout<<"enter a and b"<<endl;
	cin>>a>>b;
	
	//swap function
	temp = a;
	a = b;
	b = temp;
	
	cout<<"swapped values of a = "<<a<<" b = "<<b<<endl;
	
	return 0;
}
