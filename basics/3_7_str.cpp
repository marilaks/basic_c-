//strings
#include <iostream>
using namespace std;

//func
char display(string rin)
{
	cout<<"entered"<<rin<<endl;
}
displays(string gin)
{
	cout<<"entered"<<gin<<endl;
}

int main()
{
	char str[50];
	string str1;
	 //get function
	 cout<<"enter"<<endl;
	 cin.get(str, 50);
	 
	 //getline
	 cout<<"enter"<<endl;
	 getline(cin,str1);
	 
	 display(str);
	 displays(str1);
	 
}
