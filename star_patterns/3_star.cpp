/*
	A
  A B
A B C
*/

#include<iostream>
using namespace std;

int main(){
	int i,j,n;
	cout<<"enter rows";
	cin>>n;
	
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
            cout<<" ";
            for(j=1;j<=i;j++)
            {
                 cout<<((char)(j+64));
            }
            cout<<"\n";
    }
    return 0;
}
