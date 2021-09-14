//calculating marks
#include <iostream>
using namespace std;

//calculting student marks -
//threee dimensional array


int main(){
	
	double sum;
	
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
	
	//display
		for(int i=0;i<2;++i)
	{
		for(int j =0;j<3;++j)
		{
			for(int k =0; k<2;k++)
			{
			cout<<"numbers are"<<numbers[i][j][k]<<endl;
			sum += numbers[i][j][k];
			cout<<"sum "<<sum; 
		}
		}
		
	}
	return 0;
}
	


