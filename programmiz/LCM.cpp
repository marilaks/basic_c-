//LCM
#include<iostream>
using namespace std;

int main(){
	int max,n1,n2;
	
	cout<<"enter n1 and n2"<<endl;
	cin>>n1>>n2;
	
	//checking max
	max = (n1>n2) ? n1 : n2;
	
	do{
		if(max%n1 == 0 && max%n2 == 0){
			cout<<"LCM= "<<max<<endl;
			break; //to come out of loop as we have mentioned while(true)
		}
		else
		max++;
	}while(true);
	

}
