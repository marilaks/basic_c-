//pass by address
#include <iostream>
using namespace std;

display(int *a){//dereferencing it by *a

	*a = *a+1;
	
}
main(){
	int a =5;
	//value before
	cout<<"before\n"<<a<<endl;
	display(&a);//passing the address
	//value after 
	cout<<"after\n"<<a;
}
//Pass by address is typically used with pointers

/*
When passing an argument by address, the function parameter variable receives a copy of the address from the argument. 
At this point, the function parameter and the argument both point to the same value.
If the function parameter is then dereferenced to change the value being pointed to, that will impact the value the argument is pointing to,
 since both the function parameter and argument are pointing to the same value!
If the function parameter is assigned a different address, that will not impact the argument, 
since the function parameter is a copy, and changing the copy won’t impact the original. 
*/

