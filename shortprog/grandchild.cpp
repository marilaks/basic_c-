
/*
Zoho Interview | Set 1 Question 5
Given a two dimensional array of string like

<”luke”, “shaw”> 
 <”wayne”, “rooney”>
 <”rooney”, “ronaldo”> 
<”shaw”, “rooney”>
Where the first string is “child”, second string is “Father”. And given “ronaldo” we have to find his no of grandchildren Here “ronaldo” has 2 grandchildren.
 
 So our output should be 2..
 */
#include <iostream>
#include<cstdlib>
using namespace std;
int count=0;
string a[4][2]={
   {"luke", "shaw"},
   {"wayne", "rooney"},
   {"rooney", "ronaldo"},
   {"shaw", "rooney"}
 };
void grandchi(string x){
  for(int i=0;i<4;i++){
 if(x==a[i][1]){
  count++;
 }
  } 
}
int main() {
 string s,s1;
  
 for(int i=0;i<4;i++){
  for(int j=0;j<2;j++){
   cout<<a[i][j]<<"\n";
  }
}
 cout<<"enter string"<<"\n";
 cin>>s;
 cout<<s;
 for(int i=0;i<4;i++){
  if(s==a[i][1]){
   s1=a[i][0];
   grandchi(s1);
  }
 }
 cout<<"grand children:"<<count;
 return 0;
}
