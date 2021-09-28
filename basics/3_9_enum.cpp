//enum
#include<iostream>
/*
enums are user defined datatypes with fixed range of values
if no values are inintialized then default values from 0 will be given
*/
using namespace std;

//display all the icecream flavors with price
enum prices {
Raspberry = 2,
Strawberry = 3,
Powdered = 1,
Chocolate = 5,
Cinnamon = 2
};

int main() {
	enum prices orderPrice;
	orderPrice = Raspberry;
	cout << "icecream price: Rs" << orderPrice;
}

