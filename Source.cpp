#include<iostream>
#include"Elevator.h"
#include"Elevator_Test.h"

using namespace std;


int main()
{
	
	Elevator elev{0,100};
	Elevator_Test elev_test{elev};

	elev_test.startAllTest();

	elev.setCurentFloor(10);
	cout << elev.getCurentFloor();

}