//class
  #include <iostream>
  using namespace std;
  
  //ref:https://www.programiz.com/cpp-programming/object-class
  //defining class
  class Days
  {
  	//class variables or data members
  	public:
  	int Date;
  	int year;
  	
  	//member functions
  	void print()
  	{
  		cout<<"Date is:\n"<<Date<<'/'<<year<<'/';
  		
	  }
  }; //class ends with semicolon
  
  int main(){
  	
  	//creating class object 
  	Days today;
  	
  	//assign values to data members
  	today.Date = 20;
  	today.year = 2020;
  	
  	 //accessing member functions from class using object
  	 today.print();
  	 
  	 //tells os that everything is fine
  	 return 0;
  	
  }
  
