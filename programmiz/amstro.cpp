//amstrong number
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int remain,n,result;
	
	cout<<"enter the value"<<endl;
	cin>>n;
	
	//until n bcomz zero
	while(n !=0){
	
	remain = n % 10;
	remain = pow(remain,3);
	result += remain;
	n /= 10;
	}
	cout<<"reverse num"<<remain;
	
	//amstrong number
	
}
