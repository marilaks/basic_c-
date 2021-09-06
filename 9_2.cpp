#include <iostream>
using namespace std;

int display(int &a){//using & to refer the original value's memory
	a = a+1;
	return a;
}
main(){
	int a =5;
	//value before call by reference
	cout<<"before\n"<<a<<endl;
	display(a);
	//value after call by reference
	cout<<"after\n"<<a;
}
/*used when we go for sorting like bubble sort where we have to work with the original 
data not a copy of it*/
