#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int row,col,norows;
	char name;
	cout<<"enter the string";
	cin>>name[];
	norows = strlen(name);
	for(row = 0;row<norows;row++)
	{
		for(col=0;col<norows;col++)
	{
		if((row == col) | (row+col) == (norows-1))
		{
			cout<<name[col];
		}
		else
		{
			cout<<" ";
		}
		
	}
	cout<<"\n";
	}
	return 0;
}
