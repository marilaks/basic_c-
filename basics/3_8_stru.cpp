//structures
#include<iostream>
using namespace std;

struct Per{
	int age[10];
	char name[20];
};

Per display(Per);
void getting(Per);

int main(){
	Per P,temp;
	temp = getting(P);
	P= temp;
	display(P);
}

//get values
Per getting(Per P)
{
	cout<<"enter"<<endl;
	cin>>P.age;
	cout<<"enter"<<endl;
	cin>>P.name;
	
	return P;
	
}

//display
void display(Per P){
	cout<<"age"<<age<<endl;
	cout<<"name"<<name<<endl;
	
}


