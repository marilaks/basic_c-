//sum of natural numbers
#include<iostream>
using namespace std;

int main(){
	int n,i,sum;
	cout<<"enter the number"<<endl;
	cin>>n;
	
	//loop
	for(i=1;i<=n;++i)//preincre
	{
		sum += i;	
	}
	cout<<"sum of natural numbers is "<<sum<<endl;
	return 0;
}
