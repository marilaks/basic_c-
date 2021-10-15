//reverse a number
#include<iostream>
using namespace std;

int main(){
	int n,reversenum = 0,remainder;
	
	cout<<"enter the number"<<endl;
	cin>>n;
	
	while(n != 0){
		remainder = n%10;//get the last digit
		reversenum = reversenum*10 + remainder;//add the last digit 
		n /= 10;//to remove the last digit
	}
	
	cout<<"reversed number = "<<reversenum<<endl;
	
	return 0;
	
}
