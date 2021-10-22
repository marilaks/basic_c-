/*P     P
   R   R
   O  O
    G
   R R
  A    A
M        M*/

#include<iostream>
using namespace std;

int main(){
	int rows = 7,space,i,j;
	
	//getting input from user
 char name[] = "program";
	
	//rows
	for(i = 0;i<rows;i++){
		for(j=0;j<rows;j++){
			if((i == j) || ((i+j) == (rows - 1))){
			
			cout<<name[i];
		}
		else{
			cout<<" ";
		}
		}
		cout<<"\n";
	}
}
