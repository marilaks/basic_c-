//Ref: http://cplusplus.com/doc/tutorial/arrays/
#include<iostream>
using namespace std;

int sequ1(int arg[],int length)
{
	for(int i=0;i<length;i++)
	cout<<arg[i]<<' ';
	cout<<'\n';
	}

int main()
{
	//Declaring an array
	int sequ [5]= {10,20,30,40};
	//passing arrays address to a function
	sequ1(sequ,5);
	
}
