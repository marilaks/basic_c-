#include<iostream>
using namespace std;
int main(){
	int row,space;
	cout<<"enter no of rows";
	cin>>row;
	for(int i=1;i<=row;i++)
	{
		for(space = 1;space <= (row-i);space++)
		{
			cout<<" ";
		}
		
	
	for(int k=1;k<=((2*i)-1);k++)
	{
		cout<<k;
	}
	cout<<"\n";
	}
}
		/*int l=n/2;
		if(j==l)
		{
			cout<<"1";
		}
		else{
			cout<<j;
		}
		
	}
}
}
*/
