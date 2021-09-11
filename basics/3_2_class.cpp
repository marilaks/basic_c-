/*
	An object in C++ as, “a piece of memory that can be used to store values”. An object with a name is called a variable.
	An object in C++ as, “a piece of memory that can be used to store values”. An object with a name is called a variable.
EX:
you.driveTo(work);
makes it clearer who the subject is (you) and what behavior is being invoked (driving somewhere).
 Rather than being focused on writing functions, we’re focused on defining objects that have a well-defined set of behaviors.
  This is why the paradigm is called “object-oriented”.
 Rather than being focused on writing functions, we’re focused on defining objects that have a well-defined set of behaviors.
  This is why the paradigm is called “object-oriented”.
  
  provides a higher degree of code-reusability. 
  These objects provide  info about our data by allowing us to define how we interact with the objects, and how they interact with other objects.*/

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
  
