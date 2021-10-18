#include<iostream>
using namespace std;
int main(){
	int n,space;
	cout<<"enter no of rows";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int space = 1;space <= (n-i);space++)
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
