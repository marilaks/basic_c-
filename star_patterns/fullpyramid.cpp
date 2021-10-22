/*
		*
	*	*	*
*	*	*	*	*
	*	*	*
		*
*/

#include<iostream>
using namespace std;
int main(){
	int rows,space;
	cout<<"enter no of rows";
	cin>>rows;
	
	//upper pyramid
	for(int i=1;i<=rows;i++)
	{
		for(space = 1;space <= (rows-i);space++)
		{
			cout<<" ";
		}
		
	
	for(int k=1;k<=((2*i)-1);k++)
	{
		cout<<"*";
	}
	cout<<"\n";
	}


//lower pyramid
for(int i=(rows-1);i>=1;i--)
	{
		for(space = (rows-i);space >= 1 ;space--)
		{
			cout<<" ";
		}
		
	
	for(int k=((2*i)-1);k>=1;k--)
	{
		cout<<"*";
	}
	cout<<"\n";
	}
}


