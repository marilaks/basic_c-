//array_func
#include <iostream>
using namespace std;

display(int n[2][3][2]){

//display
		for(int i=0;i<2;++i)
	{
		for(int j =0;j<3;++j)
		{
			for(int k =0; k<2;k++)
			{
			cout<<"numbers are"<<n[i][j][k]<<endl;
			
		}
		
	}
}
}
int main()
{
	//multidimensional array
	int numbers[2][3][2];
	
	for(int i=0;i<2;++i)
	{
		for(int j =0;j<3;++j)
		{
			for(int k =0; k<2;k++)
			{
				cout<<"enter elements"<<endl;
				cin>>numbers[i][j][k];	
			}
			
		}
	}
	
	display(numbers);
	return 0;
}
	


