/*
 	A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/

#include<iostream>
using namespace std;

int main(){
	int i,j,k;
  int rows=5;
 
   for(i=1;i<=rows;i++)
     {
 
        for(j=1;j<=(rows-i);j++)
         {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
         {
            cout<<(char)(j+64);
         }
        for(j=i-1;j>=1;j--)
         {
            cout<<(char)(j+64);
         }
 
         cout<<"\n";
}

}
