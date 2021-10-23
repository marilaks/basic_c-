#include<iostream>
using namespace std;

int main()
{


int i,j,k,n=6,a[]={1,2,3,4,5,6};

for(i=0;i<n;i++)
{
if(a[i]%2==0)
{
a[i]=-1;
}
else
cout<<a[i];
}
for(i=0;i<n;i++)
{
if(a[i]==-1)
cout<<"0";
 }
return 0;
}
