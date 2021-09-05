//actual parameters and formal parameters
#include <iostream>
using namespace std;
int add(int a,int b)//callee func
{
 	return a+b;//a and b are formal arg
 }
 int main()//caller func
 {
 	int p,q,r;
 	cout<<"enter p"<<endl;
 	cin>>p;
 	cout<<"enter q"<<endl;
 	cin>>q;
 	cout<<"addition"<<endl;
    r= add(p,q);//p and q are actual arg
    cout<<"value is"<<r;
    return 0;
    
 }
 /*A formal parameter is the parameter,
  you write when you declare the method or function. I.e. 
  it defines what types the function/method takes and how many. 
  An actual parameter is the parameter you use when you call the function.*/
