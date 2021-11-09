//swap func without temp using * and /
#include <iostream>
using namespace std;

int main(){
	int a =4,b=5;
	cout<<"values of a and b are a= "<<a<<" b = "<<b<<endl;
	
	//logic
	a = a*b;//a =20
	b = a/b;//b=4
	a = a/b;//a =5
	
	cout<<"values of a and b after swapping are a= "<<a<<" b = "<<b<<endl;
	
}
