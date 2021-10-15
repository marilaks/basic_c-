//leap year
#include<iostream>
using namespace std;
int main(){
	int y;
	
	cout<<"enter year"<<endl;
	cin>>y;
	
	//check leap year or not
	if(y%4 == 0){//div by 4
		if(y%100 == 0){//div by 100
			if(y % 400 ==0){//div by 400
				cout<<"leap year"<<endl;
				
			}
			else
			{
				cout<<"not a leap year"<<endl;
			}
			
		}
		else //not divide by 400 also a leap year
			cout<<"leap year"<<endl;
	}
	else
	{
		cout<<"not a leap year"<<endl;
	}
}
