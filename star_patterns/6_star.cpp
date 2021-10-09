/*
A A A A
B B B
C C 
D 
*/

#include<iostream>
using namespace std;

int main()
{
	int i,j,n;
	cout<<"enter no of rowa";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)//from previous program we have changed the termination to 'n'
		{
			cout<<((char)(i+64));//main difference is here we have given j value
			
		}
	
	cout<<"\n";
	}
}
/*
#include <iostream>
using namespace std;
int main()
{
 
  int i,j;
  int n=5;
 
  for(i=1;i<=n;i++)
     {
         for(j=i;j<=n;j++)
         {
             cout<<((char)(i+64));
         }
 
         cout<<endl;
     }
 
  return 0;
}
 */
