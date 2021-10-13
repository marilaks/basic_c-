//string
#include<iostream>
using namespace std;
int main(){
	string lakme= "programming";
	cout<<lakme<<endl;
	
	//length
	cout<<"length is"<<lakme.length()<<endl;
	
	//to access single element in string
	cout<<lakme[4]<<endl;//to use index postition starting from 0
	
	//to change a char
	lakme[4] = 'g';
	cout<<lakme<<endl;
	
	//find-to find whether the alphabet is present
	cout<<lakme.find("gram", 0)<<endl;
	
	//substring-to print the values from that 
	cout<<lakme.substr(4, 3);//grab 3chars from 4th index value
	
	return 0;
	
	
}
