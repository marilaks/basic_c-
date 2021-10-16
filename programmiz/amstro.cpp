//amstrong number
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int check,remain,n,result,arms,val;
	
	cout<<"enter the value"<<endl;
	cin>>n;
	cout<<"enter the power value";
	cin>>val;
	
	//assigning n value to check to retain it 
	check = n;
	
	//until n bcomz zero
	while(n !=0){
	
	remain = n % 10;
	arms = pow(remain,val);
	result = result + arms;
	n /= 10;
	}
	
	if(result == check){
	
	cout<<"armstrong number = "<<result;
}
else{
	cout<<"not an amstrong number"<<endl;
}
	
	
	
}
