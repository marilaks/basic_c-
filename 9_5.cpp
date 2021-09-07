//function pointers ref:https://www.learncpp.com/cpp-tutorial/function-pointers/
#include <iostream>
using namespace std;

 foo(int x){
	
	return x;
}

int main(){
	int (*funcptr)(int) = &foo;
	//implicit dereference ref:https://stackoverflow.com/questions/6639057/what-is-implicit-dereference-in-c
	funcptr(5);
}

/*
ref:https://www.coursehero.com/file/p49gfij/const-int-fcnPtr-point-to-a-function-who-return-a-co-nst-int-int-const-fcnPtr/

Assigning a function to a function pointer
intfoo();
doublegoo();
inthoo(intx);

// function pointer assignments
int(*fcnPtr1)()= foo;// okay
int(*fcnPtr2)()= goo;// wrong 
-- return types don't match!
double(*fcnPtr4)()= goo;// okay
fcnPtr1= hoo;// wrong -- fcnPtr1 has no parameters, but hoo() does
int(*fcnPtr3)(int)= hoo;// okay
*/

