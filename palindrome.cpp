//palindrome
#include<iostream>
using namespace std;
 
int main(){
	int n,revnum = 0,m;
	cout<<"enter n";
	cin>>n;
	
	//logic 
	while(n != 0){
	
	m = n % 10;
	revnum = (revnum*10)+m;
	n /= 10;
}
	if(n = m)
	{
		cout<<"this is palindrom";
		
	}
	else{
		cout<<"not a palindrome";
	}
	
	return 0;
}
