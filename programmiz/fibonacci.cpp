//fibonacci series
#include<iostream>
using namespace std;

int main(){
	int  t1 = 0,t2 = 1,nextterm,n;
	
	cout<<"enter range"<<endl;
	cin>>n;
	
	cout<<"fibonacci series "<<t1<<" , "<<t2;
	
	//finding next term
	nextterm = t1+t2;
	
	for(int i=nextterm;i<=n;i++){
		cout<<" nextterm "<<nextterm<<",";
		t1 = t2;
		t2 = nextterm;
		nextterm = t1+t2;
	}
	
}
