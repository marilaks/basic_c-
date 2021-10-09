/*
A
B B
C C C 
*/

#include<iostream>
using namespace std;

int main()
{
	int i,j,n;
	cout<<"enter no of rowa";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<((char)(i+64));//main difference is here we have given i value
			
		}
	
	cout<<"\n";
	}
	
	
}
