//finding gcd
#include<iostream>
using namespace std;

int main(){
	
	int n1,n2;
	
	cout<<"enter n1 and n2"<<endl;
	cin>>n1>>n2;
	
	//here we are subtracting the values until both bcomz equal
	while(n1 != n2)
	{
		if(n1>n2){
				n1 -= n2;
		}
		else
		{
			n2 -= n1;
		}
	}
	cout<<"HCF= "<<n1<<endl; //we assign n1 to hcf
	
	return 0;
}
