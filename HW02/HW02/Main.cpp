#include "Fan.h"
#include<iostream>
using namespace std;

//code to test the fan class
void fan_testing();

int main()
{
	fan_testing();
	return 0;
}
//code to test the fan class
void fan_testing()
{

	//setting the parameters of the first fan object
	Fan the_first = Fan();
	the_first.setSpeed(3);
	the_first.setOn(true);
	the_first.setRadius(10);

	//setting the parameters of the second fan object
	Fan the_second = Fan();
	the_second.setSpeed(2);
	the_second.setOn(false);
	the_second.setRadius(5);

	//invoking get functions to make sure the set functions are working
	//for fan 1
	cout << "These are the properties of Fan 1. \n\n";
	cout << "The speed is: " << the_first.getSpeed() << endl;
	cout << "The fan is on: " << the_first.getOn() << endl;
	cout << "The radius is: " << the_first.getRadius() << endl;

	//for fan 2
	cout << "These are the properties of Fan 2. \n\n";
	cout << "The speed is: " << the_second.getSpeed() << endl;
	cout << "The fan is on: " << the_second.getOn() << endl;
	cout << "The radius is: " << the_second.getRadius() << endl;

}
