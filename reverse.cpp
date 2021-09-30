#include<iostream>
using namespace std;

int main(){
	int n,reversenum = 0,remainder;
	cout<<"enter int";
	cin>>n;
	//logic
	while(n!=0)
	{
		remainder = n%10;
		reversenum = (reversenum*10) + remainder;
		n /= 10;
		 
	}
	
	cout<<"reversed digit is :"<<reversenum;
	return 0;
}
