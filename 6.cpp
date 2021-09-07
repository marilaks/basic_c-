//return values ref:https://www.geeksforgeeks.org/return-by-reference-in-c-with-examples/
#include <iostream>
using namespace std;

//declaring a function
int& returnvalue(int& x)
{
  
    // Print the address
    cout << "x = " << x
         << " The address of x is "
         << &x << endl;
  
    // Return reference
    return x;
}
main()
{
	int a=5;
	//reference by value
	cout << "a = " << a
         << " The address of a is "
         << &a << endl;
         
    //reference by address
   	int &b = returnvalue(a);
   	 // Print b and its address
    cout << "b = " << b
         << " The address of b is "
         << &b << endl;
         
	return a;
	
	
}

